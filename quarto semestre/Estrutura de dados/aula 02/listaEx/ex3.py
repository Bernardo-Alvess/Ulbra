entrada = input('Digite uma lista de numeros separadas por espaços: ')
lista = entrada.split()

def verificaNumeros(lista):
    valoresValidos = []
    for i in lista:
        try:
            x = float(i)
            valoresValidos.append(x)
        except ValueError:
            print(f'{i} é um valor inválido')
    return valoresValidos

def minMax(lista):
    min = lista[0]
    max = lista[0]

    for i in lista:
        if i < min:
            min = i
        if i > max:
            max = i
    return min, max

numeros = verificaNumeros(lista)
print(minMax(numeros))