// sizeof returns the variable capacity (byte)
#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Tamanho de char: %i Byte\n", sizeof(char));
	printf("Tamanho de int: %i Bytes\n", sizeof(int));
	printf("Tamanho de float: %i Bytes\n", sizeof(float));
	printf("Tamanho de double: %iBytes\n", sizeof(double));

	return 0;
}