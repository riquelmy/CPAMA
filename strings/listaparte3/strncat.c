/*Algoritmo para concatenar os n primeiros elementos da segunda string à primeira*/
#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[T], texto2[T];
    int ncar1=0, nel;
    int iC;
    printf("Digite a primeira string:\n");
    fgets(texto1, T, stdin); /*"Hello"+"World"="HelloWorld"*/
    printf("Digite a segunda string:\n");
    fgets(texto2, T, stdin);
    printf("N primeiros elementos da segunda string:\n");
    scanf("%d", &nel); nel--;

    for (iC=0;texto1[iC]!='\0';iC++)
    {
        ncar1++;
    }
    ncar1-=2;/*Tirar 1 da newline e 1 para encontrar o index do último caractere*/
    
    for (iC=0;texto2[iC]!='\0'&&iC<=nel;iC++)
    {
        texto1[(ncar1+1)+iC]=texto2[iC];
    }


    printf("%s", texto1);
}