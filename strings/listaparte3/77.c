/*Questão 77*/
#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[T], invtexto[T];
    int iC, ncar=0, indexfinal;

    fgets(texto1, T, stdin);

    for(iC=0;texto1[iC]!='\0';iC++)
    {ncar++;}

    indexfinal=ncar-2;

    for (iC=0;indexfinal>=0;indexfinal--)
    {
        invtexto[iC]=texto1[indexfinal];
        iC++;
    }

    for (iC=0;invtexto[iC]!='\0';iC++)
    {printf("%c", invtexto[iC]);}

    return 0;

}