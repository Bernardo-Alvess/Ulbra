class Fila:
    def __init__(self):
        self.itens = []

    def vazia(self):
        return len(self.itens) == 0

    def tamanho(self):
        return len(self.itens)

    def enfileirar(self, item):
        self.itens.append(item)

    def desenfileirar(self):
        if not self.vazia():
            return self.itens.pop(0)
        else:
            return None

    def primeiro(self):
        if not self.vazia():
            return self.itens[0]
        else:
            return None

def menu():
    print("1 - Adicionar nome")
    print("2 - Remover nome")
    print("3 - Chamar próximo a ser atendido")
    print("0 - Sair")

    opcao = input("Digite a opção desejada: ")
    return opcao

def adicionar_nome(fila):
    nome = input("Digite o nome a ser adicionado: ")
    fila.enfileirar(nome)
    print("Nome adicionado com sucesso!")

def remover_nome(fila):
    nome_removido = fila.desenfileirar()
    if nome_removido is not None:
        print("Nome removido com sucesso:", nome_removido)
    else:
        print("Fila vazia!")

def chamar_proximo(fila):
    nome = fila.primeiro()
    if nome is not None:
        print("Próximo a ser atendido:", nome)
    else:
        print("Fila vazia!")

# Programa principal

fila = Fila()

while True:
    opcao = menu()

    if opcao == "1":
        adicionar_nome(fila)
    elif opcao == "2":
        remover_nome(fila)
    elif opcao == "3":
        chamar_proximo(fila)
    elif opcao == "0":
        break
