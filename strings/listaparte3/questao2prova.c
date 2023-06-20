#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[T]; 
    char textoconv[T];
    int iC;
    printf("Digite uma expressão com 1 e 0, hífens (-) e letras maiúsculas de A a Z:\n");
    fgets(texto1, T, stdin);

    for (iC=0;texto1[iC]!='\0';iC++)
    {
        if(texto1[iC]>='A'&&texto1[iC]<='C') {textoconv[iC]='2';}
        else if (texto1[iC]>='D'&&texto1[iC]<='F') {textoconv[iC]='3';}
        else if (texto1[iC]>='G'&&texto1[iC]<='I') {textoconv[iC]='4';}
        else if (texto1[iC]>='J'&&texto1[iC]<='L') {textoconv[iC]='5';}
        else if (texto1[iC]>='M'&&texto1[iC]<='O') {textoconv[iC]='6';}
        else if (texto1[iC]>='P'&&texto1[iC]<='S') {textoconv[iC]='7';}
        else if (texto1[iC]>='T'&&texto1[iC]<='V') {textoconv[iC]='8';}
        else if (texto1[iC]>='W'&&texto1[iC]<='Z') {textoconv[iC]='9';}
        else if (texto1[iC]>='0'&&texto1[iC]<='1') {textoconv[iC]=texto1[iC];}
        else if (texto1[iC]=='-') {textoconv[iC]='-';}
    }

    for (iC=0;textoconv[iC]!='\0';iC++)
    {
        printf("%c", textoconv[iC]);
    }

    return 0;
}