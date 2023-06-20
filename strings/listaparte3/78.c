/*Questão 78*/
#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[T];
    char x;
    int iC, nOcorrencias=0;

    fgets(texto1, T, stdin);
    scanf("%c", &x);

    for (iC=0;texto1[iC]!='\0';iC++)
    {
        if (texto1[iC]==x) {nOcorrencias++;}
    }

    printf("%c ocorre %d vezes\n", x, nOcorrencias);

    return 0;

}