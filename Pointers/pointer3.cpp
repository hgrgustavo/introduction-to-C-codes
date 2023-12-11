#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y;
	int* px = &y;		// px receive x memory address

	x = 14;		// x receives 14
	y = *px;		// y receives x data with *px address
	px = &y;		// px receives y address
	x = 16;		// x data changes (14 --> 16)
	
	printf("x=%d\n", x);
	printf("Endereco de x------=%p\n", &x);		// y address
	printf("y=%d\n", y);
	printf("Endereco de y -> px = %p\n", px);		// y address alocated on px
	printf("Endereco de y -------%p\n\n", &y);	// y address
	system("pause");
	return 0;
}
