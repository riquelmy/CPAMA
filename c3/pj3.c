#include <stdio.h>
int main(void)
{
    int gs1, group_identifier, publisher_code, book_code, check_dig;
    scanf("%d-%d-%d-%d-%d", &gs1, &group_identifier, &publisher_code, &book_code, &check_dig);
    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", group_identifier);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", book_code);
    printf("Check digit: %d", check_dig);
    return 0;
}
