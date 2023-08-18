print('Calculadora de IMC')
peso = float(input('Digite o seu peso: '))
altura = float(input('Digite a sua altura: '))

def calcularIMC(peso, altura):
    return peso / pow(altura, 2)

def classificarIMC(imc):
    if(imc < 18.5):
        print('Abaixo do peso')
    elif(imc >= 18.5 and imc <= 24.9):
        print('Peso normal')
    elif(imc >= 25 and imc <= 29.9):
        print('Acima do peso (sobrepeso)')
    elif(imc >= 30 and imc <= 34.9):
        print('Obesidade I')
    elif(imc >= 35 and imc <= 39.9):
        print('Obesidade II')
    else:
        print('Obesidade III')

try:
    imc = calcularIMC(peso, altura)
except:
    print('Peso ou altura com valores inválidos')
else:
    classificarIMC(imc)