#include <stdio.h>

// creating my variable "product"
struct product {
	int code;
	char name[50];
	int quantity;
	float purchase;
	float sell;
};
int main() {
	// "item" will follow "struct product" rules
	struct product item;
	printf("PREENCHENDO A VARIÁVEL \"item \"\n");
	printf("\tITEM¨. . . . . . . . . . . . . . . . . . . . ");
	fgets(item.name, 50, stdin);
	printf("\tCODIGO . . . . . . . . . . . . . . . . . . ");
	scanf("%d", &item.code);
	printf("\tQUANTIDADE . . . . . . . . . . . . . ");
	scanf("%d", &item.quantity);
	printf("\tVALOR DA COMPRA . . . . . . . . .");
	scanf("%f", &item.purchase);
	printf("\tVALOR DA REVENDA . . . . . . . .");
	scanf("%f", &item.sell);
	printf("\n");
	// prints all data
	printf("\t\t\tDADOS");
	printf("\t\tCODIGO . . . . . . . . . . . %d", item.code);
	printf("\t\tITEM . . . . . . . . . . . . . .%s", item.name);
	printf("\t\tQUANTIDADE . . . . . . %d", item.quantity);
	printf("\t\tVALOR DA COMPRA . . . . . %.2f", item.purchase);
	printf("\t\tVALOR DE REVENDA . . . . . . . %.2f", item.sell);
	return 0;
}