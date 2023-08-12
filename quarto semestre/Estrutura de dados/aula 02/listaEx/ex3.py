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

print(verificaNumeros(lista))