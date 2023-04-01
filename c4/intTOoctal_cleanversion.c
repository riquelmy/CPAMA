#include <stdio.h>
int main(void)
{
    int num, d0, d1, d2, d3, d4, d_tot;
    printf("Digite um número em inteiro, entre 0 e 32767: ");
    scanf("%d", &num);
    d0 = num%8;
    d1 = (num/8)%8;
    d2 = ((num/8)/8)%8;
    d3 = (((num/8)/8)/8)%8;
    d4 = (((num/8)/8)/8)/8;
    d_tot = d4*10000 + d3*1000 + d2*100 + d1*10 + d0*1;
    printf("O valor em octal é %d", d_tot);
    return 0;
}

