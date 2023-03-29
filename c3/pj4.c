#include <stdio.h>
int main(void)
{
    int region_num, actual_num1, actual_num2;
    printf("Enter phone number [(xxx) xxx-xxxx]: \n");
    scanf("(%d) %d-%d", &region_num, &actual_num1, &actual_num2);
    printf("%d.%d.%d", region_num, actual_num1, actual_num2);
    return 0;
}
