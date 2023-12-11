#include <stdio.h>
#include <stdlib.h>

void main() {
	// vars
	char name[30] = {}, address[30] = {};
	int phone[11] = {};
	// user inputs
	printf_s("NOME: ");
	fgets(name, 30, stdin);
	printf_s("ENDERECO: ");
	fgets(address, 30, stdin);
	printf_s("TELEFONE: ");
	scanf_s("%u",sizeof(long long), &phone);
	system("pause");
}