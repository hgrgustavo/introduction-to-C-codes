#include <stdio.h>
#include<math.h>


float dobro(float n[]){		// talvez ponteiro
	int i = 0;
	const int dimns = 3;
	for (i = 0; i < dimns; i++) {
		n[i] *= 2.0;
		printf_s("DOBRO DE %f", n[i] / 2.0);
		return n[i];
	}
}
void  main() {
	const int dim = 3;
	float nums[dim];
	int j = 0;
	for (j = 0; j < dim; j++) {
		printf_s("DIGITE UM NUMERO: ");
		scanf_s("%f", nums[j]);
	}
	dobro(nums);
	
}