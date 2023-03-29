#include <stdio.h>
int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8;
    int n9, n10, n11, n12, n13, n14, n15, n16;
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5, &n6, &n7,
    &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);
    printf("%d\t%d\t%d\t%d\n", n1, n2, n3, n4);
    printf("%d\t%d\t%d\t%d\n", n5, n6, n7, n8);
    printf("%d\t%d\t%d\t%d\n", n9, n10, n11, n12);
    printf("%d\t%d\t%d\t%d\n", n13, n14, n15, n16);
    
    printf("\nSum of the rows: %d %d %d %d\n", (n1+n2+n3+n4), (n5+n6+n7+n8),
    (n9+n10+n11+n12), (n13+n14+n15+n16));
    printf("Colunal sums: %d %d %d %d\n", n1+n5+n9+n13, n2+n6+n10+n14, 
    n3+n7+n11+n15, n4+n8+n12+n16);
    printf("Diagonal sums: %d %d", n1+n6+n11+n16, n13+n10+n7+n4);
    return 0;
}
