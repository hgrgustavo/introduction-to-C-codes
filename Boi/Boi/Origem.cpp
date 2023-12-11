#include <stdio.h>

int main() {

	int id = 1, max_id, min_id;
	double peso, max_peso, min_peso;
	printf("Digite o peso do boi [%d] (Ou 0 para encerrar)", id);
	scanf("lf", peso);

	// repeats until 0
	while (peso  != 0) {
		id++;
		printf("Digite o peso do boi [%d] (Ou 0 para encerrar)", id);
		scanf("%d", &peso);
		// flag condition
		if (peso == 0) {
			break;
		}
		// define o boi mais pesado
		if (peso > max_peso) {
			max_peso = peso;
			max_id = id;
		}
		// define o boi menos pesado
		else if (peso < min_peso) {
			min_peso = peso;
			min_id = id;
		}
	}
	// printing all stuff
	printf("\t\tLISTA DE BOIS CADASTRADOS\n\n");
	printf("\t")
	

}