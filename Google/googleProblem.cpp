#include <stdio.h>
FILE* stream;
void main() {
		int INTEGER[3];
		float DECIMAL[3];
		char LETRA[3];

	printf_s("INFORME 3 NUMEROS INTEIROS . . .\n");
	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &INTEGER[i]);
	}

	printf_s("INFORME 3 NUMEROS DECIMAIS . . . \n");
	for (int j = 0; j < 3; j++) {
		scanf_s("%f", &DECIMAL[j]);
	}

	printf_s("INFORME 3 LETRAS . . .\n");
	for (int k = 0; k < 3; k++) {
		scanf_s("%c",&LETRA[k]);
	}
		int* pINTEGER[3];
		float* pDECIMAL[3];
		char* pLETRA[3];

		fopen_s(&stream, "stream.csv", "w");
		fprintf_s(stream, "INTEIROS: %d,%d,%d", INTEGER[0], INTEGER[1], INTEGER[2]);
		fprintf_s(stream, "DECIMAIS: %f,%f,%f", DECIMAL[0], DECIMAL[1], DECIMAL[2]);
		fprintf_s(stream, "LETRAS: %c,%c,%c", LETRA[0], LETRA[1], LETRA[2]);

		for (int l = 0; l < 3; l++) {
			pINTEGER[l] = &INTEGER[l];
			*pINTEGER[l] = 2014;
			pDECIMAL[l] = &DECIMAL[l];
			*pDECIMAL[l] = 9.99;
			pLETRA[l] = &LETRA[l];
			*pLETRA[l] = 'Y';
		}
		fprintf_s(stream, "INTEIROS MODIFICADOS: %d,%d,%d", pINTEGER[0], pINTEGER[1], pINTEGER[2]);
		fprintf_s(stream, "DECIMAIS MODIFICADOS: %f,%f%f", pDECIMAL[0], pDECIMAL[1], pDECIMAL[2]);
		fprintf_s(stream, "LETRAS MODIFICADOS: %c,%c,%c", pLETRA[0], pLETRA[1], pLETRA[2]);
		
	}