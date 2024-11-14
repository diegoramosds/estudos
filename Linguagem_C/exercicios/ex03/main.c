#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");

    int qtd;

    printf("Digite a quantidade de alunos: \n");
    scanf("%d", &qtd);

    float notas[qtd];

    int i;
    for (i = 0; i < qtd; i++);
    {
     printf("Digite a nota do aluno %d\n", (i + 1));
     fflush(stdin);
    scanf("%f", &notas[i]);

    }
    for (i = 0; i < qtd; i++);
    {
             printf("Nota do aluno %d foi %f\n: ", (i + 1), notas[i]);

    }
    
    
    return 0;
}
