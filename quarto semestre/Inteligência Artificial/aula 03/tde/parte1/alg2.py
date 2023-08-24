from fractions import Fraction
def limite_rapido(s):
    if s <= 0:
        return -1 
    else:
        return 1
    
def funcao_rampa(s):
    if s < 0: return 0
    elif s >= 0 and s <= 1:
        return s
    else:
        return 1
    
def sigmoide(s):
    if s >= 0:
        return 1 - 1 / (1 + s)
    else:
        return -1 + 1/(1 - s)

def get_valores():
    x1 = int(input('Digite o valor de x1: '))
    peso1 = int(input('Digite o valor do peso1: '))

    x2 = int(input('Digite o valor de x2: '))
    peso2 = int(input('Digite o valor do peso2: '))

    x3 = int(input('Digite o valor de x3: '))
    peso3 = int(input('Digite o valor do peso3: '))

    return (x1 * peso1) + (x2 * peso2) + (x3 * peso3)

count = 0

while True:
    if count == 0 or op == 4:
        count = 1
        s = get_valores()

    print(''' 1 - Limite Rápido \n 2 - Função Rampa \n 3 - Função Sigmoide \n 4 - Mudar os valores \n 0 - Sair''')

    op = int(input('Selecione uma das funções: '))

    if op == 0:
        break

    elif op == 1:
        print(f'Algoritmo de limite rápido = {limite_rapido(s)}')
        
    elif op == 2:
        print(f'Algoritmo de função rampa = {funcao_rampa(s)}')

    elif op == 3:
        print(f'Algoritmo de função sigmoide = {sigmoide(s)} | {Fraction(sigmoide(s))}')

    input()