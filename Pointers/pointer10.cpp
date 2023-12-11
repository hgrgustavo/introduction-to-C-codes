#include <stdio.h>
#include <stdlib.h>

void alterar(int* n) {
	*n = 2548;
}
int main() {
	int x = 321;
	int* PonteiroEndereco;
				// p_endereco receive x address
	PonteiroEndereco = &x;
				// printing x element
	printf("Valor de x:	%d\n", x);
				// printing x address (atributed to p_endereco before)
	printf("Endereco de x:	%d\n", *PonteiroEndereco);
				// give x address to alteracao function (reference)
	alterar(&x);
				//  printing new x value
	printf("Valor de x alterado pela funcao:	%d\n", x);
				// printing what p_endereco is pointing
	printf("Endereco de x no ponteiro:		%p\n", PonteiroEndereco);
				// x will not change !!
	printf("Endereco da variavel x:		%p\n\n", &x);
	system("pause");
	return 0;
}





























