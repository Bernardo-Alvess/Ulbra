from fractions import Fraction

class Neuronio:
    def __init__(self, x, peso):
        self.x = x
        self.peso = peso
        

    def limite_rapido(self):
        s = self.x * self.peso
        if s <= 0:
            return -1 
        else:
            return 1
    
    def funcao_rampa(self):
        s = self.x * self.peso
        if s < 0: return 0
        elif s >= 0 and s <= 1:
            return s
        else:
            return 1
        
    def sigmoide(self):
        s = self.x * self.peso
        if s >= 0:
            return 1 - 1 / (1 + s)
        else:
            return -1 + 1/(1 - s)

x = int(input('Valor do x: '))
peso = int(input('Valor do peso: '))
peso2 = int(input('Valor do peso2: '))

neuronio = Neuronio(x, peso)
while True:

    print(''' 1 - Limite Rápido \n 2 - Função Rampa \n 3 - Função Sigmoide \n 0 - Sair''')

    op = int(input('Selecione uma das funções: '))

    if op == 0:
        break

    elif op == 1:
        print(f'Neurônio 1 = {neuronio.limite_rapido()}')
        neuronio2 = Neuronio(neuronio.limite_rapido(), peso2)
        print(f'Neurônio 2 = {neuronio2.limite_rapido()}')
        
    elif op == 2:
        print(f'Neurônio 1 = {neuronio.funcao_rampa()}')
        neuronio2 = Neuronio(neuronio.funcao_rampa(), peso2)
        print(f'Neurônio 2 = {neuronio2.funcao_rampa()}')
    elif op == 3:
        print(f'Neurônio 1 = {neuronio.sigmoide()}')
        neuronio2 = Neuronio(neuronio.sigmoide(), peso2)
        print(f'Neurônio 2 = {neuronio2.sigmoide()}')

    input()