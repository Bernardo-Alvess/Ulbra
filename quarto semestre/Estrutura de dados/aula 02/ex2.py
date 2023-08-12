def obter_numeros():
    entrada = input('Digite uma lista de números válidos: ')
    lista = entrada.split()
    numValidos = []
    for i in lista:
        try:
            numValidos.append(float(i))
        except ValueError:
            print('Valor inválido, vida que segue')
    return numValidos
        
numeros = obter_numeros()

def soma_elementos(lista):
    soma = 0
    for i in lista:
        soma += i
    print(f'A soma dos elementos = {soma}')

soma_elementos(numeros)