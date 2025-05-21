from collections import deque

class Fila:
    def __init__(self):
        self.filaElementos = deque()

    def incluirNaFila(self, elemento):
        self.filaElementos.append(elemento)

    def retirarDaFila(self):
        return self.filaElementos.popleft()

# Teste da Fila
f = Fila()
f.incluirNaFila("x")
f.incluirNaFila("y")
print(f.retirarDaFila())  # Deve exibir "x"
