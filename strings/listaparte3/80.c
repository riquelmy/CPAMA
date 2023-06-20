/*Questão 80*/
#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[T], texto2[T];
    int iC, ncar;
    int pos, estado=-1, estadofinal=-1;
    int eqSum, jC;

    fgets(texto1, T, stdin);/*Conjunto A*/
    fgets(texto2, T, stdin);/*Possível subconjunto de A*/

    for (iC=0, ncar=0;texto1[iC]!='\0';iC++)
    {ncar++;}
    ncar--; texto1[ncar]='\0';

    for (iC=0, ncar=0;texto2[iC]!='\0';iC++)
    {ncar++;}
    ncar--;texto2[ncar]='\0';

    for (iC=0;texto1[iC]!='\0'&&estadofinal==-1;iC++)
    {
        if (texto2[0]==texto1[iC])
        {estado=1, pos=iC;}
        if (estado==1)
        {
            for(eqSum=0, jC=0;texto2[jC]!='\0';jC++)
            {
                if(texto2[jC]==texto1[pos+jC]) {eqSum++;}
            }
            if (eqSum==ncar) {estadofinal=1;}
        }
    }

    if (estadofinal==-1) {printf("Não contém!");}
    else if (estadofinal==1) {printf("Contém!");}

    return 0;
}