/*Algoritmo para calcular tamanho da string*/
#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[T]; int ncar=0, iC, jC, verf=0;
    int iF, estado1=0, pontomedio;
    
    fgets(texto1, T, stdin);

    for (iC=0;texto1[iC]!='\0';iC++)
    {
        ncar++;
    }
    ncar-=1;
    iF=ncar-1;
    jC=iF;
    if (ncar%2==0)
    {
        for (iC=0;iC<=iF;iC++)
        {
            if (texto1[iC]==texto1[jC])
            {verf++;jC--;}
        }
        if (verf==ncar) {estado1=1;} else {estado1=0;}
    }
    else if (ncar%2==1)
    {
        pontomedio=iF/2;
        for (iC=pontomedio-1, jC=pontomedio+1;iC>=0;iC--)
        {
            if (texto1[iC]==texto1[jC]) {verf++;}
        }
        if (verf*2+1==ncar) {estado1=1;} else {estado1=0;}
    }
    printf("%d", estado1);
    

}