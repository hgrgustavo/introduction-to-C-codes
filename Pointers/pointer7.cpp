#include <stdio.h>
#include <stdlib.h>

int main() {
		// The first address of the vector is also the first element of that vector
	int v[5] = { 32,56,78,32,44 }, i;
		// Prints all elements normally
	for (i = 0; i < 5; i++) {
		printf("Elemento do VETOR sem ponteiros [%d]=%d \n", i, v[i]);
	}
	printf("\n\n");
		// Prints all vector elements using pointers
	for (i = 0; i < 5; i++) {
		printf("Imprimindo os vetores com a notação *(v + i)");
		printf("Elemento do vetor com ponteiros [%d] = %d \n", i, *(v + i));		// *(v+i) Calls the vector element with the pointer (*v) and the respective index
	}
	printf("\n\n");
	system("pause");
	return 0;
}