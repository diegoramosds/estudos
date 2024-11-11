#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int idade;

    printf("Digite a idade \n");
    scanf("%d", &idade);

    if (idade >= 18)
    {
    printf("A idade digitada foi = %d", idade);
    printf("Você está apto à ter CNH \n");
    } else {
    printf("A idade digitada foi = %d \n", idade);
    printf("Você ainda não esta apto a ter CNH");
    }
    

    return 0;
}
