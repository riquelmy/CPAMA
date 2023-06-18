/*strncpy - copia os primeiros N caracteres da segunda string para a primeira*/
#include <stdio.h>
#define T 100
int main(void)
{
    char texto1[30], texto2[T];
    int N, iC;
    fgets(texto2, T, stdin);
    scanf("%d", &N);

    N--;

    for (iC=0;iC<=N;iC++)
    {
        texto1[iC]=texto2[iC];
    }

    for (iC=0;iC<=N;iC++)
    {
        printf("%c", texto1[iC]);
    }

    return 0;
}