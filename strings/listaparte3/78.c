#include <stdio.h>
#define T 100
int main(void)
{
    char texto[T], car;
    int iC, vezes=0;
    
    printf("Digite o texto:\n");
    fgets(texto, T, stdin);
    printf("Digite o caractere:\n");
    scanf("%c", &car);

    for (iC=0;texto[iC]!='\0';iC++)
    {
        if (texto[iC]==car) {vezes++;}
    }

    printf("%c acontece %d vezes", car, vezes);
    return 0;
}