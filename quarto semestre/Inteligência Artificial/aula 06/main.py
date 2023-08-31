vies = 1


valores = [
    [[1, 0], [-1,-1,-1], 1, vies],
    [[1, 1], [-1,-1,-1], 1, vies],
    [[0, 0], [-1,-1,-1], 0, vies],
    [[0, 1], [-1,-1,-1], 0, vies]
]

def soma_ponderada():
    s = (entradas[0] * pesos[0]) + (entradas[1] * pesos[1]) + (vies * pesos[2])
    return s

def func_rampa(entradas, pesos, vies):
    s = soma_ponderada()
    if s <= 0: return 0
    else: return 1

def ajuste_sinaptico(pesos, entradas, saida_desejada, _yo):
    w1 = pesos[0] + 1 * (saida_desejada - _yo)*entradas[0]
    w2 = pesos[1] + 1 * (saida_desejada - _yo)*entradas[1]
    w3 = pesos[2] + 1 * (saida_desejada - _yo)* vies
    return w1, w2, w3

for i in range(len(valores)): #saida 0
    saida_desejada = valores[i][2]
    pesos = valores[i][1]
    #entradas = valores[i][0]
    
    entrada1 = int(input("Digite a 1a entrada: "))
    entrada2 = int(input("Digite a 2a entrada: "))
    entradas = [entrada1, entrada2]
    ajustes = 1
    count = 0
    while ajustes != 0:
        ajustes = 0
        valor_rampa = func_rampa(entradas, pesos, vies)
        if valor_rampa != saida_desejada:
            ajustes += 1
            pesos = ajuste_sinaptico(pesos, entradas, saida_desejada, valor_rampa)
        count += 1
    if valor_rampa == 1:
        print("automobilismo")
    else:
        print("futebol")
