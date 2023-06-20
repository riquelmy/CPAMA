/*Questão 82*/
#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[T], textoN[T];
    int iC, jC=0;
    int bword=0, tword=0;
    int indx, indy;
    int xF, yF;
    
    fgets(texto1, T, stdin);

    /*For que normaliza*/
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
    
    /*For que encontra a maior palavra, bem como as suas coordenadas*/
    for (iC=0, tword=0;textoN[iC]!='\0';iC++)
    {
        if(textoN[iC]!=32) 
        {
            if (tword==0) {indx=iC;}
            tword++;
            if(textoN[iC+1]=='\n')
            {
                indy=iC;
                if(tword>=bword) {bword=tword; xF=indx; yF=indy;}
            }
        }
        else if (textoN[iC]==32)
        {
            indy=iC-1;
            if(tword>=bword)
            {
                bword=tword;
                xF=indx; yF=indy;
            }
            tword=0;
        }
    }

    for (iC=0;iC<=T;iC++)
    {
        if (iC>=xF&&iC<=yF)
        {printf("%c", textoN[iC]);}
    }
    printf("\n\nIntervalo dos índices: [%d,%d]--\n Tamanho da maior palavra: %d\n", xF, yF, bword);
    return 0;
}