#include <stdio.h>
#include <stdlib.h>

int main() {
	int Par[10] = {}, Impar[10] = {}, Numero = 0, Index = 0;
	for (Index = 0; Index < 10; Index++); {
		printf("DIGITE UM NUMERO INTEIRO: ");
		scanf("%i", &Numero);
		while (Numero == 0) {
			printf("ZERO É UM NÚMERO INVÁLIDO! DIGITE NOVAMENTE: ");
			scanf("%i", Numero);
		}
		if (Numero != 0) {
			if (Numero % 2 == 0) {
				Par[Index] = Numero;
			}
			else {
				Impar[Index] = Numero;
			}
		}
	}
	printf("NUMEROS PARES ");
	for (Index = 0; Index < 10; Index++) {
		printf("%i",Par, Index);
	}
	printf("NUMEROS IMPARES");
	for (Index = 0; Index < 10; Index++) {
		printf ("%i",Impar, Index);
	}
	system("pause");
	return 0;
}
