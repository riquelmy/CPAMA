/*strchr - Algoritmo para buscar a primeira ocorrência de um caractere em uma string*/
/*sem break*/
#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[T];
    char caractere;
    int iC,estado=-1, pos;

    fgets(texto1, T, stdin);
    scanf("%c", &caractere);

    for (iC=0;texto1[iC]!='\0';iC++)
    {
        if (caractere==texto1[iC]&&estado==-1)
        {estado=1, pos=iC;}
    }

   if (estado==1)
   {
    printf("Primeiro '%c' encontrado no index %d\n", caractere, pos);
   }
   else {printf("Não encontrado!\n");}

   return 0;
}