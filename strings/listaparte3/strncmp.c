/*strncmp - Algoritmo para comparar se os primeiros N caracteres de duas strings são iguais. 
Se são, estado=1. Caso não sejam, estado=-1*/
#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[T], texto2[T];
    int N;
    int iC, ncar1=0, ncar2=0, samechar=0;
    int estado=-1;

    fgets(texto1, T, stdin);
    fgets(texto2, T, stdin);
    scanf("%d", &N);
    N--;

    for (iC=0;texto1[iC]!='\0'&&iC<=N;iC++)
    {
        if (texto1[iC]==texto2[iC])
        {samechar++;}
    }

    for (iC=0;texto1[iC]!='\0'&&iC<=N;iC++)
    {
        ncar1++;
    }

    for (iC=0;texto2[iC]!='\0'&&iC<=N;iC++)
    {
        ncar2++;
    }

    if (samechar==ncar1&&samechar==ncar2)
    {estado=1;}

    if(estado==1) {printf("Iguais");}
    else {printf("Diferentes");}

    return 0;
}