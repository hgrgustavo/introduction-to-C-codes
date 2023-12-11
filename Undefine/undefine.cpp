#include <stdio.h>
#include <stdlib.h>

#define VALOR 235			// Definição da constante

int main() {
	printf("Valor = %d\n\n", VALOR);
	#undef VALOR		// Undefine retira a definição anterior, deixando VALOR vazio
	#define VALOR 20
	printf("Novo Valor = %d\n\n", VALOR);
	system("pause");
	return 0;
}