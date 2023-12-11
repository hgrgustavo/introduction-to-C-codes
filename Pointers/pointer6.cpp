#include <stdio.h>
#include <stdlib.h>

int main() {
	int x[] = { 2,16,15,3,10 };
	int* pont;

	pont = x;		// atribute the vector's address to x

	printf("Valor de x[0]: %p\n", x);
	printf("Valor de x[0]: %p\n", pont);

	return 0;
}