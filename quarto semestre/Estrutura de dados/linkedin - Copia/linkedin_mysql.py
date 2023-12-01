import mysql.connector


db_config = {
    'user':'turma6ntop',
    'password':'turma6ntop',
    'host':'db4free.net',
    'database':'linkedin6n',
    'port': 3306
}

def criar_banco():
    conn = mysql.connector.connect(**db_config)
    cursor = conn.cursor()

    cursor.execute(
        '''CREATE TABLE IF NOT EXISTS contatos_maik_bernas (
        id INTEGER PRIMARY KEY,
        nome TEXT,
        perfil_linkedin TEXT
        )'''
    )

    cursor.execute(
        '''CREATE TABLE IF NOT EXISTS conexoes_maik_bernas (
        id INTEGER PRIMARY KEY,
        contato1_id INTEGER,
        contato2_id INTEGER,~~
        FOREIGN KEY (contato1_id) REFERENCES contatos_maik_bernas(id) ON DELETE CASCADE,
        FOREIGN KEY (contato2_id) REFERENCES contatos_maik_bernas(id) ON DELETE CASCADE
        )'''
    )

    conn.commit()
    conn.close()

def adicionar_contato(id, nome, perfil_linkedin):
    conn = mysql.connector.connect('linkedin_network.db')
    cursor = conn.cursor()

    cursor.execute('INSERT INTO contatos_maik_bernas (id, nome, perfil_linkedin) VALUES (?, ?, ?)', (id, nome, perfil_linkedin))
    conn.commit()
    conn.close()

def listar_contatos():
    conn = mysql.connector.connect('linkedin_network.db')
    cursor = conn.cursor()

    cursor.execute('SELECT * FROM contatos_maik_bernas')
    contatos = cursor.fetchall()

    conn.close()
    return contatos

def adicionar_conexao(contato1_id, contato2_id):
    conn = mysql.connector.connect('linkedin_network.db')
    cursor = conn.cursor()

    cursor.execute('BEGIN')

    try:
        cursor.execute('SELECT * FROM conexoes_maik_bernas WHERE (contato1_id = ? AND contato2_id = ?) OR (contato2_id = ? AND contato1_id = ?)',
                       (contato1_id, contato2_id, contato2_id, contato1_id))

        if cursor.fetchone() is None:
            cursor.execute('INSERT INTO conexoes_maik_bernas (contato1_id, contato2_id) VALUES (?, ?)', (contato1_id, contato2_id))
        else:
            print("A conexão entre esses contatos já existe.")
            
        conn.commit()

    except mysql.connector.IntegrityError:
        conn.rollback()
        print("Ocorreu um erro de concorrência. Tente novamente.")
            
    conn.close()

def listar_conexoes(contato_id):
    conn = mysql.connector.connect('linkedin_network.db')
    cursor = conn.cursor()

    cursor.execute(
        '''
        SELECT c.nome
        FROM contatos_maik_bernas AS c
        JOIN conexoes_maik_bernas ON c.id = CASE
            WHEN conexoes_maik_bernas.contato1_id = ? THEN conexoes_maik_bernas.contato2_id
            ELSE conexoes_maik_bernas.contato1_id
        END 
        WHERE conexoes_maik_bernas.contato1_id = ? OR conexoes_maik_bernas.contato2_id = ?
        '''
        , (contato_id, contato_id, contato_id))

    conexoes = cursor.fetchall()
    conn.close()
    return conexoes

def excluir_contato(contato_id):
    conn = mysql.connector.connect('linkedin_network.db')
    cursor = conn.cursor()

    cursor.execute('BEGIN')
    cursor.execute('DELETE FROM conexoes_maik_bernas WHERE contato_id = ? OR contato2_id = ?', (contato_id, contato_id))
    cursor.execute('DELETE FROM contatos_maik_bernas WHERE id = ?', (contato_id))
    # try:
        
    #     print("Contato excluído com sucesso.")
    #     conn.commit()

    # except mysql.connector.IntegrityError:
    #     conn.rollback()
    #     print("Existe uma conexão com este contato. O contato será excluído, e as conexões também.")
    conn.commit()
    conn.close()


def excluir_conexao(contato1_id, contato2_id):
    conn = mysql.connector.connect('linkedin_network.db')
    cursor = conn.cursor()
    cursor.execute('DELETE FROM conexoes_maik_bernas WHERE (contato1_id = ? AND contato2_id = ?) OR (contaoto1_id = ? AND contato2_id = ?)', (contato1_id, contato2_id, contato2_id, contato1_id))

    conn.commit()
    conn.close()
    
def menu():
    while True:
        print('\n1. Adicionar Contato')
        print('2. Listar Contatos')
        print('3. Adicionar Conexão')
        print('4. Listar Conexões de um Contato')
        print('5. Excluir Contato')
        print('6. Excluir Conexão')
        print('0. Sair')

        escolha = input("Escolha uma opção: ")

        if escolha == "1":
            id_contato = input("ID do contato: ")
            nome = input("Nome do contato: ")
            perfil_linkedin = input("Perfil do Linkedin: ")
            adicionar_contato(id_contato, nome, perfil_linkedin)
        elif escolha == "2":
            contatos = listar_contatos()
            print('Lista de Contatos')
            for contato in contatos:
                print(f"ID: {contato[0]}, Nome: {contato[1]}, Perfil Linkedin {contato[2]}")
        elif escolha == "3":
            contato1_id = int(input("ID do primeiro contato: "))
            contato2_id = int(input("ID do segundo contato: "))
            adicionar_conexao(contato1_id, contato2_id)
        elif escolha == "4":
            contato_id = int(input("ID do contato: "))
            conexoes = listar_conexoes(contato_id)
            print("Conexões do contato: ")
            for conexao in conexoes:
                print(conexao[0])
        elif escolha == "5":
            contato_id = int(input("ID do contato a ser excluído: "))
            excluir_contato(contato_id)
        elif escolha == "6":
            contato1_id = int(input("ID do contato: "))
            contato2_id = int(input("ID da conexão a ser removida: "))
            excluir_conexao(contato1_id, contato2_id)
        elif escolha == "0":
            break
        else:
            print("Opção inválida. Tente Novamente.")

if __name__ == "__main__":
    criar_banco()
    menu()
