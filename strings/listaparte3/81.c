/*Questão 81*/
#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[T], textoN[T];
    int iC, jC=0;
    
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
    
    for (iC=0;textoN[iC]!='\0';iC++)
    {
        printf("%c", textoN[iC]);
    }
    
    return 0;
}