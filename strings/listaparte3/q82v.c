/*Questão 82 - No caso, esse imprime apenas o número de caracteres da maior palavra*/
#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[T], textoN[T];
    int iC, jC=0;
    int bword=0, tword=0;//bigword, tempword
    
    fgets(texto1, T, stdin);
    
    for (iC=0;texto1[iC]!='\0';)
    {
        if(texto1[iC]==32) {iC++;}
        else if (texto1[iC]!=32)
        {
            textoN[jC]=texto1[iC];
            jC++;iC++;
            if(texto1[iC]==32) 
            {
                textoN[jC]=32;
                jC++;
            }
        }
    }
    
    for(iC=0;textoN[iC]!='\0';iC++)
    {
        if (textoN[iC]!=32) 
        {
            tword++;
            if(textoN[iC+1]=='\n')
            {if (tword>=bword) {bword=tword;}}
        }
        else if (textoN[iC]==32)
        {
            if (tword>=bword) {bword=tword;}
            tword=0;
        }

    }

    printf("%d", bword);
    
    return 0;
}