#include <stdio.h>
int main() {
	int dim=0;	// declaring dimension
	int j = 0;			// 
	int* pj = &j;
	printf("Digite a dimensao do array (maximo 20): ");		// asking array dimension for user
	scanf_s("%d", &dim);			// reads array size
	if (dim <= 0 || dim > 20) {				// attempts to prevent wrong values
		printf("Tamanho invalido. Deve estar entre 1 e 20!\n");		// error msg
		return 1;				// cancel the program
	}						// end if
	int arr[20]={};				// declaring array
	for (int i = 0; i < dim; i++) {				// user sets all 20 values 
		printf("Elemento %d: ", i + 1);				// user message
		scanf_s("%d", &arr[dim]);			// read each value that the user put on each array space
	}				// end if
	for (int i = 0; i < dim - 1; i++) {			// it fits with the "actual" array size :: arr[3] = [0],[1],[2] (always starts with a zero!!)		|		second element 
		for (j = 0; j < dim - i - 1; j++) {			// j is here to guarantee the sequential left-right comparision				|			first element  
			if (arr[j] > arr[j+1]) {						// if element is greater than the right after element (x+1)
				int temp = arr[j];			// swap :  temp var receives the higher value
				arr[j] = arr[j+1];			// swap : array space with the lower value receives the higher value
				arr[j+1] = temp;					// swap : array space  (with the higher value before), now receives temp (lower value)  
			}				// end if
		}			// end second for
	}		// end first for
	printf("Array ordenado: ");				// ordened array message		
	for (int i=0; i < dim ; i++) {				// condition to show all elements
		printf("%d", arr[i]);				// printing all elements
	}			// end for
	printf("\n");		// next line
	return 0;					// finishes the program
}					// end main function