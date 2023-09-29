# Inicializa uma lista vazia para representar o DEQUE
deque_lista = []

while True:
    print("Menu:")
    print("1- Adicionar no Início")
    print("2- Adicionar no final")
    print("3- Exibir Primeiro")
    print("4- Exibir Último")
    print("5- Remover Primeiro")
    print("6- Remover Último")
    print("7- Imprimir deque")
    print("0- Sair")
    
    escolha = input("Escolha uma opção: ")
    
    if escolha == "1":
        item = input("Digite o item para adicionar no início: ")
        deque_lista.insert(0, item)
        print(f"{item} foi adicionado no início do DEQUE.")
    elif escolha == "2":
        item = input("Digite o item para adicionar no final: ")
        deque_lista.append(item)
        print(f"{item} foi adicionado no final do DEQUE.")
    elif escolha == "3":
        if deque_lista:
            print(f"Primeiro item: {deque_lista[0]}")
        else:
            print("O DEQUE está vazio.")
    elif escolha == "4":
        if deque_lista:
            print(f"Último item: {deque_lista[-1]}")
        else:
            print("O DEQUE está vazio.")
    elif escolha == "5":
        if deque_lista:
            item = deque_lista.pop(0)
            print(f"{item} foi removido do início do DEQUE.")
        else:
            print("O DEQUE está vazio.")
    elif escolha == "6":
        if deque_lista:
            item = deque_lista.pop()
            print(f"{item} foi removido do final do DEQUE.")
        else:
            print("O DEQUE está vazio.")
    elif escolha == "7":
        if not deque_lista:
            print("Lista vazia")
        else:
            print(deque_lista)
    elif escolha == "0":
        break
    else:
        print("Opção inválida. Tente novamente.")

print("Programa encerrado.")