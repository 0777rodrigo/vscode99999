#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    float somaNotas, notas[4], contador, media;
    int i;

    for (i = 0; i < 4; i++)
    {

        printf("digite a %d nota \n ", i + 1);
        scanf("%f", &notas[i]);

        somaNotas += notas[i];
    }

    media += somaNotas / 4;

    if (media >= 7)
    {
        printf("aprovado");
    }
    else if (media >= 5)
    {

        printf("recuperacao");
    }

    else
    {

        printf("reprovado");
    }

    printf("media final %2.f \n ", media);

    {
    }
    return 0;
}