import random
import time

def enfileirar(lista, valor):
    lista.append(valor)

def aleatorio(lista, valor):
    while len(lista) < valor:
        aleatorio = random.randint(1, 100)
        if aleatorio not in lista:
            enfileirar(lista, aleatorio)

def selection_sort(lista):
    for i in range(len(lista)):
        for j in range(i + 1, len(lista)):
            if lista[j] < lista[i]:
                temp = lista[i]
                lista[i] = lista[j]
                lista[j] = temp
    return lista

def cronometro(alg):
    inicio = time.time()
    alg
    fim = time.time()
    tempo = fim - inicio
    print(f'Tempo de execução: {tempo:.100f} segundos')

def bubble_sort(lista):
    for i in range(len(lista)):
        for j in range(len(lista) - 1, i, -1):
            if lista[j] < lista[j - 1]:
                temp = lista[j]
                lista[j] = lista[j-1]
                lista[j-1] = temp
    print(lista)

def insertion_sort(lista):
    for i in range(1, len(lista)):
        chave = i - 1
        


lista_original = []

while True:
    print("""MENU
1 - DIGITAR NÚMERO
2 - CRIAR LISTA ALEATÓRIA
3 - IMPRIMIR LISTA
4 - SELECTION SORT
5 - BUBBLE SORT
6 - TAMANHO DA LISTA
7 - INSERTION SORT
9 - LIMPAR LISTA
0 - SAIR""")
    
    opc = int(input("Digite uma opção: "))

    if opc == 0:
        break

    elif opc == 1:
        num = int(input("Digite um valor para enfileirar: "))
        enfileirar(lista_original, num)

    elif opc == 2:
        num = int(input("Digite quantos valores deseja na lista: "))
        aleatorio(lista_original, num)

    elif opc == 3:
        print(lista_original)

    elif opc == 4:
        cronometro(selection_sort(lista_original.copy()))

    elif opc == 5:
        cronometro(bubble_sort(lista_original.copy()))

    elif opc == 6:
        print(len(lista_original))

    elif opc == 7:
        pass
    elif opc == 9:
        lista_original.clear()

    else:
        print("Escolha uma opção válida")

    