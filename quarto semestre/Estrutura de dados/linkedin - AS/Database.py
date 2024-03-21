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

    def deletarContato(self, id):
        conn = mysql.connector.connect(**self.dbconfig)
        cursor = conn.cursor()

        cursor.execute('BEGIN')
        #cursor.execute('DELETE FROM conexoes_maik_bernas WHERE id = %i OR contato2_id = %i', (id, id))
        cursor.execute('DELETE FROM contatos_maik_bernas WHERE id = %s', (id,))

        conn.commit()
        conn.close()

        print('Contato removido com sucesso')

    def consultarContatos(self):
        conn = mysql.connector.connect(**self.dbconfig)
        cursor = conn.cursor()
        cursor.execute('SELECT * FROM contatos_maik_bernas')
        contatos = cursor.fetchall()
        conn.close()
        return contatos
