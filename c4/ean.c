#include <stdio.h>
int main(void)
{
    int d, i0, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
    int num, c_digit;
    
    printf("Entre os primeiros 12 dígitos do EAN:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i0, &i1, &i2, &i3, &i4, &i5,
    &j1, &j2, &j3, &j4, &j5);
    
    printf("%d%d%d%d%d%d%d%d%d%d%d%d\n", d, i0, i1, i2, i3, i4, i5, j1, j2, j3,
    j4, j5);

    first_sum = i0 + i2 + i4 + j1 + j3 + j5;
    second_sum = d+i1+i3+i5+j2+j4;
    c_digit = first_sum*3 + second_sum;
    c_digit = c_digit - 1;
    c_digit = c_digit%10;
    c_digit = 9 - c_digit;
    printf("O check digit é: \n%d", c_digit);
    

    return 0;
}
