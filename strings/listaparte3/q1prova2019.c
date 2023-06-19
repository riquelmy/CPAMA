#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[T], texto2[T];
    char carI='a';
    int est, iC, jC, kC=0;
    char menor, maior;

    fgets(texto1, T, stdin);

    for (;carI<='z';carI++)
    {
        est=-1;
        for(iC=0;texto1[iC]!='\0'&&est==-1;iC++)
        {
            if (carI==texto1[iC])
            {
                est=1;
                texto2[kC]=texto1[iC];
                kC++;
            }
        }
    }

    for(iC=0;texto2[iC]!='\0';iC++)
    {
        menor=texto2[iC];maior=texto2[iC];
        for(jC=0;texto2[jC]<='z';jC++)
        {
            if(texto2[jC+1]-maior==1) {maior=texto2[jC+1];iC++;}
        }
        printf("%c:%c ", menor, maior);

    }

    return 0;


}