total = 0

class Caminhoneiro:
    def __init__(self, name):
        self.name = name

    def getName(self):
        return self.name

caminhoneiros = []

def inicializa():
    total = 0

def estaVazia():
    if total == 0:
        return True
    else:
        return False
    
def estaCheia():
    if total >= 10:
        return True
    else:
        return False

def mostrarFila():
    if estaVazia():
        print('Não há nenhum caminhoneiro na fila')
    else:
        for i in range(len(caminhoneiros)):
            print(f"{caminhoneiros[i].getName()} na posição {i}")

def enfileirar(nome_caminhoneiro):
    if estaCheia():
        print('Fila de caminhoneiros cheia')
    else:
        global total
        total += 1
        caminhoneiro = Caminhoneiro(nome_caminhoneiro)
        caminhoneiros.append(caminhoneiro)

def desenfileirar():
    if estaVazia():
        print('Fila vazia')
    else:
        return caminhoneiros.pop(0).getName()

for i in range(11):
    enfileirar(f"caminhoneiro {i}")

mostrarFila()
print(desenfileirar())
mostrarFila()