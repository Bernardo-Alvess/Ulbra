entrada = input('Digite uma lista de números separados por vírgula: ')
lista = entrada.split(',')

def soma_pares(lista):
    soma = 0
    for i in lista:
        try:
            if int(i) % 2 == 0:
                soma += int(i)
        except:
            print(f'{i} é um valor inválido')
    return soma

print(soma_pares(lista))