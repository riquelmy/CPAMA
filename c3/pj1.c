#include <stdio.h>
int main(void)
{
    int month, day, year;
    scanf("%d/%d/%d", &month, &day, &year);
    printf("%d%.2d%.2d", year, month, day);
}
