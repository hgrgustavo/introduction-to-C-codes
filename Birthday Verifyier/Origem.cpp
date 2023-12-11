#include <stdio.h>
// main data structure
struct pessoa {
	char nome[50];
	int dia;
	int mes;
};
int  main() {
	// one people for each struct (8 in total)
	struct pessoa vector[8] = {}, * pointer;
	int i, cont;
	char c;
	// register
	for (i = 0; i < 8; i++) {
		printf("INFORME SEU NOME: ");
		fgets(vector[i].nome, 50, stdin);
		printf_s("INFORME O DIA DE SEU ANIVERSARIO: ");
		scanf_s("%d", &vector[i].dia);
		while ((c = getchar()) != '\n' && c != EOF) {}	// clean keyboard buffer
		printf_s("INFORME O MES DE SEU ANIVERSARIO: ");
		scanf_s("%d", &vector[i].mes);
		while ((c = getchar()) != '\n' && c != EOF) {}	// clean keyboard buffer
	}
	pointer = &vector[0];
	for (i = 1; i < 13; i++) {		// monthly for
		printf("\n\n- - - - - - - - - - - - - - - - - - - - - -\n\n");
		printf("ANIVERSARIANTES MES %i\n\n", i);
		for (cont = 0; cont < 8; cont++) {				// vectors for
			if (pointer[cont].mes == i) {
				printf("\n | %s", pointer[cont].nome);	
			}
		}
	}
}