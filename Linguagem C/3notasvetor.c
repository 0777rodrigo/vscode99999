#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{

float notas[3], somaNotas, media;
int i;

for (i = 0; i < 3; i++)
{
printf("digite a %d nota \n ", i + 1);
scanf("%f", &notas[i]);

somaNotas += notas[i];

}

media = somaNotas / 3;

for (i = 0; i < 1; i++)
{



printf("media final %f \n ",media);

}

return 0;

}