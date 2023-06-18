/*strlen - Algoritmo para calcular tamanho da string*/
#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[T]; int ncar=0, iC;
    
    fgets(texto1, T, stdin);

    for (iC=0;texto1[iC]!='\0';iC++)
    {
        ncar++;
    }
    ncar-=1;
    printf("%d\n", ncar);

    return 0;
}