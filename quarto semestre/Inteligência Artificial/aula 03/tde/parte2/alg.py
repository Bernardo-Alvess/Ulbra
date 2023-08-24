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
    x = int(input('Digite o valor de x: '))
    peso = int(input('Digite o valor do peso: '))
    return [x, peso]

def soma(valores):
    s = None
    for i in valores:
        s = i[0] * i[1]

    return s

qtd = int(input('Quantas entradas você quer? '))

valores = []
for i in range(qtd):
    valores.append(get_valores())

s = soma(valores)

while True:
    print(''' 1 - Limite Rápido \n 2 - Função Rampa \n 3 - Função Sigmoide \n 0 - Sair''')

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