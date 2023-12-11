#include <stdio.h>

int main() {
	struct pessoa {
		char nome[50];
		int idade;
		char endereco[50];
	}; struct  dados;
	// user interface, inputs and packing the struct
	printf("INFORME SEU NOME: ");
	scanf("%c", &dados.nome);
	printf("%c, INFORME SUA IDADE ATUAL!",&dados.nome);
	scanf("%d", &dados.idade);
	printf("%c, INFORME SEU ENDERECO: ",&dados.nome);
	scanf("%c", &dados.endereco);
	// prints struct data
	printf("============ DADOS OBTIDOS ============");
	printf("\tNOME: %c",&dados.nome);
	printf("\tIDADE: %d",&dados.idade);
	printf("\tENDERECO: %c",&dados.endereco);
	return 0;
}