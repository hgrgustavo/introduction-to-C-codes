#include <stdio.h>
void conversion(float K[24], float F[24]) {
	// getting fahrenheit 
	for (int i = 0; i < 24; i++) {
		F[i] = 1.8 * (K[i] - 273) + 32;
	}
	_Post_ _Notnull_ FILE* pFILE;
	fopen_s(&pFILE,"outputs.csv", "w+");		// declaring csv file and csv reference pointer
	for (int j=0;j<24;j++){
		// inserting data to file
		 fprintf_s(pFILE, "%i", j + 1);			
		 fprintf_s(pFILE, "%.1f K", K[j]);
		 fprintf_s(pFILE, "%.1f F", F[j]);
	}
}
void main() {
	int i = 2;
	printf_s(" - - - - - !! INFORME AS TEMPERATURAS EM KELVIN !! - - - - \n   ",i);
	// kelvin inputs
	float KELVIN[24] = {}, FAHR[24] = {};
	for ( i = 0; i < 3; i++) {
		printf_s("\n\tINFORME A TEMPERATURA %d: ", i+1);
		scanf_s("%f", &KELVIN[i]);
	}
	conversion(KELVIN, FAHR);
}