#include <stdio.h>
int main(void)
{
    float amt_loan, int_rate, monthly_paym, fmonth, smonth, tmonth;
    scanf("%f %f %f", &amt_loan, &int_rate, &monthly_paym);
    int_rate=(int_rate/100.0f)/12.0f;
    amt_loan=amt_loan*(1+int_rate*1);
    fmonth=amt_loan-monthly_paym;
    smonth=(fmonth*(1+int_rate*1))-monthly_paym;
    tmonth=smonth*(1+int_rate*1)-monthly_paym;
    printf("%.2f %.2f %.2f", fmonth, smonth, tmonth);
    return 0;
}
