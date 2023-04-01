#include <stdio.h>
int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
    int num;
    
    printf("Enter the full number in this box: ");
    scanf("%d", &num);
    
    d = num/10000000000;
    
    i1 = (num%10000000000)/1000000000;
    i2 = (num%1000000000)/100000000;
    i3 = (num%100000000)/10000000; 
    i4 = (num%10000000)/1000000;
    i5 = (num%1000000)/100000;
    
    j1 = (num%100000)/10000;
    j2 = (num%10000)/1000;
    j3 = (num%1000)/100;
    j4 = (num%100)/10;
    j5 = (num%10)/1;
    
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 +j4;
    total = 3*first_sum + second_sum;
    printf("Check digits: %d\n", 9 - ((total-1)%10) );
    return 0;
}
