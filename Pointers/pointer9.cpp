#include <stdio.h>
#include <stdlib.h>

void soma_mais_1(int* num);
int main() {
	int a = 8;
	// printing a before the function call
	printf("Antes da funcao: a = %d\n", a);
	//  function receives the value a
	soma_mais_1(&a);
	//  printing a after the function call
	printf("Depois da funcao: a = %d\n", a);
	system("pause");
	return 0;
}
void soma_mais_1(int* num) {
	num += 1;
	printf("Dentro da funcao: a = %d", *num);
}