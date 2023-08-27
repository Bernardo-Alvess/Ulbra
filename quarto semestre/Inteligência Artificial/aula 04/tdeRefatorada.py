valores = [
    [[1,1],[-1,-1], 1],
    [[1,0],[-1,-1], 1],
    [[0,1],[-1,-1], 0],
    [[0,0], [-1,-1], 0]
    ]

def soma_ponderada():
    s = (entradas[0] * pesos[0]) + (entradas[1] * pesos[1])
    return s

def func_rampa(entradas, pesos):
    s = soma_ponderada()
    if s <= 0: return 0
    else: return 1

def ajuste_sinaptico(pesos, entradas, saida_desejada, _yo): #x1,x2 entrada|_yd: saida desejada, _yo:saida obtida
    w1 = pesos[0] + 1 * (saida_desejada - _yo)*entradas[0]
    w2 = pesos[1] + 1 * (saida_desejada - _yo)*entradas[1]
    return w1, w2

for i in range(len(valores)):
    saida_desejada = valores[i][2]
    pesos = valores[i][1]
    entradas = valores[i][0]

    ajustes = 1
    count = 0
    while ajustes != 0:
        ajustes = 0
        valor_rampa = func_rampa(entradas, pesos)
        if valor_rampa != saida_desejada:
            ajustes += 1
            pesos = ajuste_sinaptico(pesos, entradas, saida_desejada, valor_rampa)
        count += 1

    print(f'Valor da saída = {valor_rampa} | Iterado {count} vezes')