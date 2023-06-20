/*Variação da questão 80, que imprime também quantas vezes uma segunda string está contida na primeira*/
#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[T], texto2[T];
    int ncar1=0, ncar2=0;
    int vezes=0;
    int iC, jC, kC;
    int encontrado=-1, nIguais;


    fgets(texto1, T, stdin);
    fgets(texto2, T, stdin);

    for (iC=0;texto1[iC]!='\0';iC++)
    {ncar1++;}
    for(iC=0;texto2[iC]!='\0';iC++)
    {ncar2++;}

    ncar1--; ncar2--;
    texto1[ncar1]='\0'; texto2[ncar2]='\0';

    for(iC=0;texto1[iC]!='\0';iC++)
    {
        nIguais=0;
        if(texto2[0]==texto1[iC])
        {
            for(jC=iC, kC=0;texto1[jC]!='\0';jC++)
            {
                if(texto1[jC]==texto2[kC]) {nIguais++;}
                kC++;
            }
            if (nIguais==ncar2) {encontrado=1; vezes++;}
        }
    }

    if(encontrado==1) {printf("O texto 1 contém o 2: %d vez(es)", vezes);}
    else {printf("Não contém!");}

    return 0;
}