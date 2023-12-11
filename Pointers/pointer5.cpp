#include <stdio.h>
#include <stdlib.h>

int main() {
	int* x, * y, c = 5, d = 3;

	x = &c;		// x points to c address
	y = &d;		// y points to d address
	*y = 8;		// changes d value
	*x = *y;		//  copy the d value (pointed by y) to c (pointed by x)
	*x = 1;		// changes c value
	y = x;		// y points to the same address as x (c address)
	*y = 0;		// changes c value through y pointer

	printf("Valor da variavel c: %d\n\n |  Valor da variavel d:%d\n\n", c, d);
	system("pause");
	return 0;
}
