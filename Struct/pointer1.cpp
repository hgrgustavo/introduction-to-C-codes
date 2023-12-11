#include <stdio.h>
#include <stdlib.h>
int main() {
	// declaring our pointers struct
	struct calendar {
		int* day;
		int* month;
		int* year;
	}; struct calendar now;		//now reference to calendar

	int daySeptember = 28;
	int monthSeptember = 9;
	int yearSeptember = 2018;
	
	now.day = &daySeptember;
	now.month = &monthSeptember;
	now.year = &yearSeptember;

	printf("ENDERECO DA VARIÁVEL DIA SETEMBERO\t%p\n", &daySeptember);
	printf("PONTEIRO DIA APONTA PARA O ENDERECO\t%p\n\n", now.day);
	printf("ENDERECO DA VARIAVEL MES SETEMBRO\t%p\n", monthSeptember);
	printf("PONTEIRO MES APONTA PARA O ENDERECO\t%p\n\n", now.month);
	printf("ENDERECO DA VARIAVEL ANO SETEMBRO\t%p\n", yearSeptember);
	printf("PONTEIRO ANO APONTA PARA O ENDERECO\t%p\n\n ", now.year);

	printf("DIA: %d\tMES: %d\tANO: %d", *now.day, *now.month, *now.year);

	system("pause");
	return 0;
}