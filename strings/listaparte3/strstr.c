/*strchr - Algoritmo para buscar a primeira ocorrência de um caractere em uma string*/
/*sem break*/
#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[T], texto2[T];
    int iC,estado=-1, pos, samechar=0;
    int jC;

    fgets(texto1, T, stdin);
    fgets(texto2, T, stdin);


    for (iC=0;texto1[iC]!='\0';iC++)
    {
        if (texto2[0]==texto1[iC]&&estado==-1)
        {estado=1, pos=iC;}
    }
    for(jC=0;texto2[jC]!='\0';jC++) {;} 
    texto2[jC-1]='\0';
    
    for (jC=0;texto2[jC]!='\0';jC++)
    {
        if (estado==1)
        {
            if(texto2[jC]==texto1[pos+jC]) {samechar++;}
        }
    }

    if(samechar==jC) {printf("Contém!");}  


   return 0;
}