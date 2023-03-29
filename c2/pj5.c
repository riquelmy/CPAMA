#include <stdio.h>
int main(void)
{
    float x, polvalue;
    printf("Type in the value of x: \n");
    scanf("%f", &x);
    polvalue=3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-1*x*x+7*x-6;
    printf("%f is the value of the polynomial expression", polvalue);
    return 0;
}

