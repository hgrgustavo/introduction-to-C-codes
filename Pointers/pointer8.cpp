#include <stdio.h>
#include <stdlib.h>

int main() {
					// Declaring our pointers (vectors)
	int* pont[4];
	int* pont1[4];
	int* pont2[4];
				// Elements
	int x[3] = { 1,22,322 };
	int y[3] = { 4,51,66 };
	int z[3] = { 7,83,99 };
	int w[3] = { 10,11,12 };
			// Atribuiting each element address with a pointer
	pont[0] = &x[0];
	pont[1] = &y[0];
	pont[2] = &z[0];
	pont[3] = &w[0];
				// printing all elements of row 1
	printf("Valor de x[0]: %d\n", *pont[0]);
	printf("Valor de y[0]: %d\n", *pont[1]);
	printf("Valor de z[0]: %d\n", *pont[2]);
	printf("Valor de w[0]: %d\n", *pont[3]);

	pont1[0] = &x[1];
	pont1[1] = &y[1];
	pont1[2] = &z[1];
	pont1[3] = &w[1];
	// printing all elements of row 2
	printf("Valor de x[1]: %d\n", *pont[0]);
	printf("Valor de y[1]: %d\n", *pont[1]);
	printf("Valor de z[1]: %d\n", *pont[2]);
	printf("Valor de w[1]: %d\n", *pont[3]);

	pont2[0] = &x[2];
	pont2[1] = &y[2];
	pont2[2] = &z[2];
	pont2[3] = &w[2];
	// printing all elements of row 3
	printf("Valor de x[2]: %d\n", *pont[0]);
	printf("Valor de y[2]: %d\n", *pont[1]);
	printf("Valor de z[2]: %d\n", *pont[2]);
	printf("Valor de w[2]: %d\n", *pont[3]);



	return 0;

}