#include <stdio.h>
#define T 100
int main(void)
{
    char texto[T]; int iC, jC, caracteres=0;
    char invtexto[T];

    fgets(texto, T, stdin);

    for (iC=0;texto[iC]!='\0';iC++)
    {
        caracteres++;
    }

    for (iC=caracteres-1, jC=0;iC>=0;iC--)
    {
        invtexto[jC]=texto[iC];
        jC++;
    }

    for (iC=0;iC<T;iC++)
    {
        printf("%c", invtexto[iC]);
    }
    return 0;
}