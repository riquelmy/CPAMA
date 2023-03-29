#include <stdio.h>
int main(void)
{
    float x, polvalue;
    printf("Type in the value of x: \n");
    scanf("%f", &x);
    polvalue=((((3*x+2)*x-5)*x-1)*x+7)*x-6;//It's called horner's rule
    printf("%f is the value of the polynomial expression", polvalue);
    return 0;
}

