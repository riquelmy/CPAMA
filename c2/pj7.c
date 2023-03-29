#include <stdio.h>
int main(void)
{
    int total_amount, twentybills,tenbills, fivebills, onebills;
    scanf("%i", &total_amount);
    twentybills=total_amount/20;
    total_amount=total_amount-20*twentybills;
    tenbills=total_amount/10;
    total_amount=total_amount-10*tenbills;
    fivebills=total_amount/5;
    total_amount=total_amount-5*fivebills;
    onebills=total_amount;
    printf("$20 bills: %i\n$10 bills: %i\n$5 bills: %i\n$1 bills: %i", twentybills, 
    tenbills, fivebills, onebills);
    return 0;
} 
