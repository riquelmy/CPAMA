#include <stdio.h>
int main(void)
{
	int numero, bit0, bit1, bit2, bit3, bit4;
	scanf("%d", &numero);
	bit4 = numero%2;
	bit3 = (numero/2)%2;
	bit2 = ((numero/2)/2)%2;
	bit1 = (((numero/2)/2)/2)%2;
	bit0 = ((((numero/2)/2)/2)/2);
	printf("%d%d%d%d%d", bit0, bit1, bit2, bit3, bit4);
	return 0;
}
