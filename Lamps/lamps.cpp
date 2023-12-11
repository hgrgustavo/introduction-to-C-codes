#include <stdio.h>
#include <math.h>
// struct
typedef struct entrada {
	int tipo;
	float larg;
	float compr;
	int cont;
};  entrada info;
// functions
float Area (float larg, float compr) {			// l = largura ; c = comprimento
	float *a;
	*a = larg * compr;
	printf("AREA DO COMODO . . . . . . . . ");
	return *a;
	}
float Lampada(int t, float *area) {
	t = info.tipo;
	*area = *a;
	int power;
	switch (t) {
	case 0:
		power = 12;
	case 1:
		power = 15;
	case 2:
		power = 18;
	case 3:
		power = 20;
	case 4:
		power = 22;
	}
	float result = 
	printf("%d POR METRO QUADRADO", resultado);
}
// i/o
int main() {
	printf("~~~~~~~~~~~~ SISTEMA VERIFICADOR DE LAMPADAS 60 W ~~~~~~~~~~~~\n\n");
	printf("\t\t INFORME O TIPO DE COMODO");
	printf("\t  0  - BANHEIRO\n");
	printf("\t  1 -  ESCRITORIO\n");
	printf("\t  2 - COZINHA\n");
	printf("\t  3 - QUARTO\n ");
	printf("\t  4 -  SALA\n");
	printf("\t  PRESS [-1] PARA SAIR\n\n");				// flag msg
	printf(">>  ");
	scanf_s("%d", info.tipo);
	scanf_s("%n", info.cont);

	// error loop
	while (info.cont > 1 && info.cont < -1) {
		printf_s("VALOR INVALIDO!	REINICIANDO... \n\n\n\n");
		return main();
	}
	// flag break
	while (info.cont == -1) {
		printf_s("TENHA UM OTIMO DIA ;)");
		break;
	}
}


























