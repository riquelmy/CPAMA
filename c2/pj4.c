#include <stdio.h>
#define TAX (5.0f/100.0f)
int main(void)
{
    float amountnotax, amountwtax;
    printf("Type in the amount with no tax: \n");
    scanf("%f", &amountnotax);
    amountwtax = amountnotax + (TAX*amountnotax);
    printf("The value with tax added: $%.2f", amountwtax);
    return 0;
}
