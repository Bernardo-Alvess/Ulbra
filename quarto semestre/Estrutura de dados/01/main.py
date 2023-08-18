#num = 1
#num2 = input('digite um numero: ')
#print(num, int(num2))

print("""1 - PARA INSERIR
2 - PARA REMOVER O ULTIMO
3 - IMPRIMIR A LISTA
4 - ULTIMO ELEMENTO
0 - PARA SAIR""")

lista = []
while True:

    opc = int(input('Digite uma opção: '))

    if opc == 0:
        break

    if opc == 1:
        num = int(input('Digite um número: '))
        lista.append(num)

    elif opc == 2:
        lista.pop()

    elif opc == 3:
        print(lista)
        
    elif opc == 4:
        print(lista[-1])
    else:
        print('Digite uma opção válida.')

print(lista)