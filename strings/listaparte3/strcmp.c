/*strcmp - Algoritmo para comparar se duas strings são iguais. Se são, estado=1.*/
/*Caso não sejam, estado=-1*/
#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[T], texto2[T];
    int iC, ncar1=0, ncar2=0, samechar=0;
    int estado=-1;

    fgets(texto1, T, stdin);
    fgets(texto2, T, stdin);


    for (iC=0;texto1[iC]!='\0';iC++)
    {
        if (texto1[iC]==texto2[iC])
        {samechar++;}
    }

    for (iC=0;texto1[iC]!='\0';iC++)
    {
        ncar1++;
    }

    for (iC=0;texto2[iC]!='\0';iC++)
    {
        ncar2++;
    }

    if (samechar==ncar1&&samechar==ncar2)
    {estado=1;}

    if(estado==1) {printf("Iguais");}
    else {printf("Diferentes");}

    return 0;
}