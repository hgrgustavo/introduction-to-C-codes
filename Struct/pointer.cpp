#include <stdio.h>
#include <stdlib.h>

void print(int* num);
int main() {
	struct value {
		int a, b;
	}; struct value x, * px;
	px = &x;
	px->a = 201;
	px->b = 302;

	printf("VALORES ANTES DA EXECUCAO DA FUNCAO\n");
	printf("VALOR DE A = %d", px->a);
	printf("VALOR DE B = %d", px->b);

	printf("\nVALORES APOS A EXECUCAO DA FUNCAO");
	printf("\nVALOR DE A = %d",& x.a);
	printf("\nVALOR DE B = %d", &x.b);

	system("pause");
	return 0;
}
void print(int* num) {
	*num = *num + 3;
	printf("TOTAL = %d\n", *num);
}