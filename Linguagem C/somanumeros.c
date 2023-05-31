#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    float i, soma, numero;

    for (i = 0; i < 5; i++)
    {

        printf("digite um numero \n ");
        scanf("%f", &numero);
        soma += numero;
    }
    printf("soma dos numeros %2.f \n ", soma);
}