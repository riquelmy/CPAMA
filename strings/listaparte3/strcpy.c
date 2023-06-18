/*Algoritmo para copiar toda segunda string para a primeira*/
#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[20], texto2[T]; int iC;

    fgets(texto2, T, stdin);

    for (iC=0;texto2[iC]!='\0';iC++)
    {
        texto1[iC]=texto2[iC];
    }
    texto1[iC]='\0';

    for(iC=0;texto1[iC]!='\0';iC++)
    {printf("%c", texto1[iC]);}

    return 0;
}