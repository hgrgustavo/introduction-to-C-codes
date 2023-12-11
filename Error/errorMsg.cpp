#include <stdio.h>
#include <stdlib.h>
#include "Origem.h"
#define Alert(msg) printf("STATUS: %s\n", msg)
int main() {
	int number;
	int* const pointer;	  	// Why we need a pointer here?

	printf("DIGITE UM NUMERO ENTRE 0 E 10: ");
	scanf("%d", pointer);
		if ((x > 0) && (x < 10)) {
			Alert("NAO CONTEM ERRO!");
		}
		else {
			Alert("ERRO: NUMERO INVALIDO! ");
		}
		system("pause");
		return 0;
}
