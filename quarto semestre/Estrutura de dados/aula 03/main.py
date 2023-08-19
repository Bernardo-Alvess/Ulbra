import random

#Adiciona os valores passados para a lista
def adicionar_item(valor):
    valor = valor.split(',')
    for i in valor:
        lista.append(i)

def lista_aleatoria(qtd):
    for _ in range(qtd):
        num = random.randint(1, 1000)
        lista.append(num)

op = None
lista = []
while True:
    
    print('1 - ADICIONAR ITEM NA LISTA')
    print('2 - CRIAR LISTA ALEATÓRIA')
    print('9 - IMPRIME A LISTA')
    print('10 - LIMPA A LISTA')
    print('0 - SAIR')
    op = int(input('Opção: '))

    if op == 0:
        print('Encerrando o programa')
    elif op == 1:
        valor = input('Digite um valor ou uma lista de valores separados por vírgula: ')
        adicionar_item(valor)
    elif op == 2:
        qtd = int(input('Quantidade de números aleatórios: '))
        lista_aleatoria(qtd)
    elif op == 9:
        print(lista)
    elif op == 10:
        lista.clear()