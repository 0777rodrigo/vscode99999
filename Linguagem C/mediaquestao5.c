#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    float somaNota, nota, contador, media;
    char resposta;

    do
    {

        printf("insira uma nota \n ");
        scanf("%f", &nota);

        printf("deseja inserir outra nota \n ");
        scanf("%s", &resposta);

        somaNota += nota;
        contador++;

    } while (resposta == 's');

    media = somaNota / contador

            if (media >= 7)
    {

        printf("aprovado");
    }
    else if (media >= 5)
    {
        printf("recuperação");
    }
    else
    {
        printf("reprovado");
    }
    return 0;
}