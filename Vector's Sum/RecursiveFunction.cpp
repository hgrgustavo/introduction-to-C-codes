#include <stdio.h>
#include <stdlib.h>
#include "code.h"
#define NumVetor 5			// Declaração de Constante
 
int SomaVetor(int Vetor[], int Tamanho); 	// Declaração e inicialização do vetor
int main()
{
	int Vetor[NumVetor] = { 22, 5, 11, 3, 6 }; 
	int I, Soma = 0;
	int Resultado = SomaVetor(Vetor, NumVetor);			// Chamada da função recursiva

	printf("FUNÇÃO RECURSIVA: \n");
		//Impressão do resultado da função recursiva
	printf("SOMA COM A FUNÇÃO RECURSIVA:  %i\n", Resultado);

	printf("\n");

	for (I = 0; I < NumVetor; I++)		// Laço de vetor
	{
		Soma += Vetor[I];	// Soma dos elementos do vetor}
		printf("FUNÇÃO ITERATIVA: \n");
		printf("SOMA COM LAÇO FOR: %d\n\n", Soma);			// Impressão do resultado do for
		system("pause");
		return 0;
	}
	int SomaVetor(int Vetor[], int Tamanho);	// Função Recursiva
	{
		if (Tamanho == 1)
		{
			return Vetor[0];
		}
		else
		{
			// Soma dos elementos do vetor
			return Vetor[Tamanho - 1] + SomaVetor(Vetor, Tamanho - 1);
		}
			
	}
}
