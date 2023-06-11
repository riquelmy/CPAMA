#include <stdio.h>
int main(void)
{
    int numA;
    for (numA=0;numA<=255;numA++)
    {
        printf("%d %c\n", numA, numA);
    }
    return 0;
}