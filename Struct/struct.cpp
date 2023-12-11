#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	printf("\n\t\tCADASTRO DE CLIENTES\n\n");

	// {struct} structure
	struct Ficha {
		char name[50];
		char address[50];
		int phone[11];
		char email[40];
	}; struct Ficha client;			// client var

	printf("------------------------------------------");
	printf("DIGITE O NOME DO CLIENTE: ");
	fflush(stdin);
	fgets(client.address, 30, stdin);

	printf("TELEFONE: ");
	scanf_s("%d", &client.phone);
	printf("E-MAIL:	");
	fflush(stdin);
	fgets(client.email, 30, stdin);

	printf("\t\tIMPRIMINDO OS DADOS DA STRUCT");
	printf("\tNOME DO CLIENTE:\n%s",client.name);
	printf("\tRUA:\t\t%s", client.address);
	printf("\tTELEFONE:\n%s", client.phone);
	printf("\tEMAIL:\n%s", client.email);
	getch();
	return 0;
}