import mysql.connector

class Database:
    def __init__(self, dbconfig):
        self.dbconfig = dbconfig
        self._criar_banco()

    def _criar_banco(self):
        conn = mysql.connector.connect(**self.dbconfig)
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
            contato2_id INTEGER,
            FOREIGN KEY (contato1_id) REFERENCES contatos_maik_bernas(id) ON DELETE CASCADE,
            FOREIGN KEY (contato2_id) REFERENCES contatos_maik_bernas(id) ON DELETE CASCADE
            )'''
        )

        conn.commit()
        conn.close()
    
    def adicionarContato(self, id, nome, perfil_linkedin):
        conn = mysql.connector.connect(**self.dbconfig)
        cursor = conn.cursor()

        cursor.execute('INSERT INTO contatos_maik_bernas (id, nome, perfil_linkedin) VALUES (%s, %s, %s)', (id, nome, perfil_linkedin))
        conn.commit()
        conn.close()

        print(f'Usuário: "{nome}" adicionado com sucesso')

    def deletarContato(id):
        conn = mysql.connector.connect('linkedin_network.db')
        cursor = conn.cursor()

        cursor.execute('BEGIN')
        cursor.execute('DELETE FROM conexoes_maik_bernas WHERE id = %s OR contato2_id = %s', (id, id))
        cursor.execute('DELETE FROM contatos_maik_bernas WHERE id = %s', (id))
        # try:
            
        #     print("Contato excluído com sucesso.")
        #     conn.commit()

        # except mysql.connector.IntegrityError:
        #     conn.rollback()
        #     print("Existe uma conexão com este contato. O contato será excluído, e as conexões também.")
        conn.commit()
        conn.close()

        print('Contato removido com sucesso')