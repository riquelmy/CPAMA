#include <stdio.h>
int main(void)
{
    int item_num;
    float unit_price;
    int month, day, year;
    printf("Enter item number: \n");
    scanf("%d", &item_num);
    printf("Enter unit price: \n");
    scanf("%f", &unit_price);
    printf("Enter purchase date (like mm/dd/yyyy)\n");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    printf("%d\t$ %.2f\t%d/%d/%d",item_num, unit_price, month, day, year);
}
