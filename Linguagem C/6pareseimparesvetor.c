#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i, numeroPar, numeroImpar;
    float numero[6];

    for (i = 0; i < 6; i++)
    {

        printf("digite o %d numero \n ", i + 1);
        scanf("%f", &numero[i]);
    }

    if (numero % 2 == 0)

    {

        numeroPar++;
    }
    else
    {
        numeroImpar++;
    }

    printf("quantidade de numeros pares %i \n ", numeroPar);
    printf("quantidade de numeros impares %i \n ", numeroImpar);
    {
    }
    return 0;
}