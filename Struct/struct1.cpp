#include <stdio.h>
#include <stdlib.h>

struct valuePass {
	int v, v1;
};
void print (int value);

int main() {
	struct valuePass p = { 201,302 };
	printf("VALORES ANTES DA EXECUCAO DA FUNCAO");
	printf("\nVALOR DE 'A' = %d", p.v);		// copies a
	printf("\nVALOR DE 'B' = %d", p.v1);	// copies b

	printf("\n\t\tVALORES NA MEMORIA APOS A EXECUCAO DA FUNCAO");
	printf("\nVALOR DE 'A' NAO SOFREU ALTERACAO NA MEMORIA =  %d", p.v);
	printf("\nVALOR DE 'B' NAO SOFREU ALTERACAO NA MEMORIA = %d",p.v1);
	
	system("pause");
	return 0;
}
void print (int num) {
	int num1;
	num1 = num + 3;
	printf("VALOR %d NA EXECUCAO DA FUNCAO = %d\n", num, num1);
}

