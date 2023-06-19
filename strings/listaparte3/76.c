#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[T];
    int vogais[5]={0,0,0,0,0};
    char voletras[5]={'a', 'e', 'i', 'o', 'u'};
    int iC;
    
    fgets(texto1, T, stdin);

    for (iC=0;texto1[iC]!='\0';iC++)
    {
        if (texto1[iC]=='a'||texto1[iC]=='A') {vogais[0]++;}
        else if (texto1[iC]=='e'||texto1[iC]=='E') {vogais[1]++;}
        else if (texto1[iC]=='i'||texto1[iC]=='I') {vogais[2]++;}
        else if (texto1[iC]=='o'||texto1[iC]=='O') {vogais[3]++;}
        else if (texto1[iC]=='u'||texto1[iC]=='U') {vogais[4]++;}
    }

    for (iC=0;iC<5;iC++)
    {
        printf("%c <-> %d\n", voletras[iC], vogais[iC]);
    }

    return 0;
    

}