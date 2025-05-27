from collections import deque
from typing import Deque

# Classe Pilha
class Pilha:
    def __init__(self):
        self.elementos = []

    def empilha(self, elemento):
        self.elementos.append(elemento)

    def desempilha(self):
        return self.elementos.pop()

    def vazio(self):
        return len(self.elementos) == 0

    def __str__(self):
        retorno = "\nEstrutura Pilha (Topo para Base)\n"
        for elemento in self.elementos[::-1]:
            indice = self.elementos.index(elemento)
            retorno += str(indice) + " - " + str(elemento) + "\n"
        return retorno


# Classe Fila
class Fila:
    def __init__(self):
        self.filaElementos: Deque[int] = deque()

    def incluirNaFila(self, elemento):
        self.filaElementos.append(elemento)

    def incluirMuitosNaFila(self, variosElementos: list):
        for elemento in variosElementos:
            self.filaElementos.append(elemento)

    def retirarDaFila(self):
        return self.filaElementos.popleft()

    def __str__(self):
        retorno = "\nEstrutura Fila (Frente para Trás)\n"
        for elemento in self.filaElementos:
            indice = self.filaElementos.index(elemento)
            retorno += str(indice) + " - " + str(elemento) + "\n"
        return retorno


# Testando Pilha
p = Pilha()
p.empilha("A")
p.empilha("B")
p.empilha("C")
print(p)
print("Desempilhando:", p.desempilha())
print(p)

# Testando Fila
f = Fila()
f.incluirMuitosNaFila(["X", "Y", "Z", "W"])
print(f)
print("Retirando da fila:", f.retirarDaFila())
print(f)
