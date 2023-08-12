#numeros = input("Digite um lista de número separados por espaços: ")
numeros = '1 2 3 b c a 5 db 40'
listaNum = numeros.split()
numerosValidos = []
soma = 0
for num in listaNum:
    try:
        soma += float(num)
        numerosValidos.append(num)
    except:
        print(f'"{num}" é um Valor inválido')

print(f'Os números lidos foram: {numerosValidos}')
print(f'A soma total destes números é {soma}')