#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // int value1;

    //  printf("Digite um n�mero: \n");
    //  scanf("%d", &value1);

    //  if (value1 > 10)
    //  {
    //    printf("O n�mero digitado � maior que 10!");
    //  }
    //  else {
    //    printf("O n�mero digitado � menor que 10!");
    //  }

    float number;

     printf("Digite um n�mero: \n");
     scanf("%f", &number);

     if (number > 10 && number < 20)
     {
        printf("O n�mero digitado � maior que 10 e menor que 20 \n");
     }
     
    return 0;
}
