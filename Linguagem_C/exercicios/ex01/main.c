#include <stdio.h>    // Para printf e scanf
#include <locale.h>   // Para setlocale



int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese_Brazil");  //allow coments

    // printf("Hello world!");

    // int valor1 = 10;
    // int valor2 = 20;
    // int result = valor1 + valor2;

    // float preco = 1000.50;

    // preco = preco * 1.1;

    
        // printf("Digite sua idade\n");
        // int idade;
        // scanf("%d", &idade);

        // printf("A idade digitada foi %d \n", idade);

        // if (idade >= 18) 
        // {
        //     printf("Voce e maior de idade\n");
        // } else {
        //      printf("Voce e menor de idade\n");
        // }

        printf("Digite da semana\n");
        printf("1 - domingo\n");
        printf("2 - segunda\n");

        int diaSemana;

        scanf("%d", &diaSemana);

        switch (diaSemana)
        {
            case 1: {
            printf("Domingo selecionado!\n");
            break;
            }
            case 2: {
            printf("Segunda selecionada!\n");
            break;
            }
            break;
        
        default: {
        printf("Dia inválido!\n");
        }
            break;
        }
        

        return 0;
}
