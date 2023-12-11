#include <stdio.h>
#include <stdlib.h>
int main() {
	int x = 4, y = 7;
	int* px, * py;		// declaring pointers
	
			// printing memory address and data
	printf("Endereco (&x) = %p --- Data (x) = %d \n", &x, x);				// & refers to the pointer (px; py)
	printf("Endereco (&y) = %p --- Data (y) = %d \n", &y, y);				// % restrict the type of data (Data Formats)

			// receiving the memory address and allocating on the Address Specifier (&)
	px = &x;
	py = &y;
	
	printf("Endereco (&px) = %p --- Data (*px) = %d \n", &x, x);				
	printf("Endereco (&py) = %p --- Data (*py) = %d \n", &y, y);
}