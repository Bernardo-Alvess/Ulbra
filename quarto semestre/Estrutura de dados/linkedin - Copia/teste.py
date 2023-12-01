from Contato import Contato
from Linkedin import Linkedin

db_config = {
    'user':'turma6ntop',
    'password':'turma6ntop',
    'host':'db4free.net',
    'database':'linkedin6n',
    'port': 3306
}

#bernardo = Contato(3, "bernardo", "@bernalves")
linkedin = Linkedin(db_config)

linkedin.deletar_contato(2)