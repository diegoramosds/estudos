from collections import deque

class Fila:
    def __init__(self):
        self.filaElementos = deque()

    def setElement(self, element):
        self.filaElementos.append(element)

    def __str__(self):
        return f"fila atual : {list(self.filaElementos)}"


# Teste da Fila
f = Fila()
f.setElement("y, x")
print(f)  # Deve exibir "x"
