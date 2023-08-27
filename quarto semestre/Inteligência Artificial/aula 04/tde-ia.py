class Neuronio:
    weights = None
    inputs = None
    output = None

    def __init__(self, inputs, weights, output):
        self.weights = weights
        self.inputs = inputs
        self.output = output

    def soma_ponderada(self):
        s = (self.inputs[0] * self.weights[0]) + (self.inputs[1] * self.weights[1])
        return s
    
    def func_rampa(self):
        s = self.soma_ponderada()
        if s <= 0: return 0
        else: return 1

    def ajuste_sinaptico(self, _yo): #x1,x2 entrada|_yd: saida desejada, _yo:saida obtida
        w1 = self.weights[0] + 1 * (self.output - _yo)*self.inputs[0]
        w2 = self.weights[1] + 1 * (self.output - _yo)*self.inputs[1]
        return w1, w2

neuronio = Neuronio([1,0], [-1,-1], 1)

print(f'Saída = {neuronio.func_rampa()}')

ajustes = 1

while ajustes != 0:
    ajustes = 0
    valor_rampa = neuronio.func_rampa()
    if valor_rampa != neuronio.output:
        ajustes += 1
        neuronio.weights = neuronio.ajuste_sinaptico(valor_rampa)
        print(neuronio.weights, neuronio.inputs)
        print(f'Valor saida = {valor_rampa}')