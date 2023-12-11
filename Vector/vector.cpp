#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 5 // definindo uma constante

int main() {
	int vet[max];
	int i, j;


	for (i = 0; i < max; i++) {

		printf("Digita o numero para o vetor [%d]: ", i);
		scanf_s("%d", &vet[i]);  //preenchendo o vetor com dados


	}

	printf("\n\n");

	for (j = 0; j < max; j++) {
		printf("Voce digitou o numero %d para o vetor [%d]\n", vet[j], j);

	}
			
	printf("\n\n");
	system("pause");

}