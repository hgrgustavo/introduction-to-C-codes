#include <stdio.h>		// input / output
#include <algorithm>		// sort function

 struct associateData {		// main struct
	 char name[2];			// user name
	int age;		// user age
	struct extraData {			// sub struct
		char address[20];			// user address
		int phone;				// user phone
		int day, month, year;			// user anniversary
	} extraInfo[2];			// end sub struct
} info[2];				// declaring struct as an array ; end main struct

void main() {			// main function
	int userID[10] = { 0,1,2,3,4,5,6,7,8,9 };			// sort 'data-base'

	for (int i = 0; i < 2; i++) {			// loop
		printf_s(" = = = = = = = = BEM VINDO AO SISTEMA DO CLUBE !  = = = = = = = \n\n");			// welcome 
		printf_s("\t DIGITE SEU NOME COMPLETO: ");		// name advice input
		scanf_s("%s", info[i].name, 12, stdin);					// name output
		printf_s("\t DIGITE SUA IDADE: ");			// age advice input
		scanf_s("%d", info[i].age, 3, stdin);			// age output
		std::sort();		// sorting 'data-base' numbers
		printf_s("\tSENHA GERADA (!! GUARDE ESTA INFORMACAO !!\n");				// id sort completion advice
		for (int j = 0; j < 2; j++) {		
			printf_s("%d", userID[j]);
		}
		printf_s("\ GUARDE ESTA INFORMACAO !!");
		printf_s("\tINFORME SEU ENDERECO COMPLETO: ");			// user address advice
		scanf_s("%s",info[i].address, 20, stdin);			// address output
		printf_s("\tDIGITE SEU TELEFONE: ");			// user phone input advice
		scanf_s("%d", info[i].phone, 11, stdin);			// user phone output
		printf_s("\tDIGITE A DATA DE SEU NASCIMENTO (DD/MM/AAAA)");			// anniversary format
		scanf_s("%d/%d/%d", info[i].day, 2, info[i].month, 2, info[i].year, 4, stdin);			// anniversary output
	}
	FILE* stream=nullptr;		// declaring stream pointer ; file control object


}