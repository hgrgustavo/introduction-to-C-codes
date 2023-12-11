#include <stdio.h>
using namespace std;
// ~Função para verificar se todos os digitos são iguais
bool DigitosIguais(char* str)
{
	for (int i = 1; i < strlen(str); i++)
	{
		if (str[i] != str[0])
		{
			return false;
		}
	}
	return true;
}
// Função para validar o cpf
bool ValidarCPF(char* cpf)
{
	// Verificar se o cpf tem 11 digitos
	if (strlen(cpf)) != 11)
	{
	return false;
	}
	// Verificar se todos os digitos são números
	for (int i = 0; i < 11; i++)
	{
		if (!isdigit(cpf[i]))
		{
			return false;
		}
	}
	// Verificar se todos os digitos são iguais (CPF Válido)
	if (DigitosIguais(cpf))
	{
		return false;
	}
	// Calcular o primeiro dígito verificador
	
		int soma = 0
			for (int i = 0; i < 9; i++)
			{
				soma += (cpf[i]) - '0' * (10 - i)
			}
		int PrimeiroDigito = 11 - (soma % 11);
		// Verificar se o primeiro dígito verificador está correto
		if (PrimeiroDigito == 10 | | PrimeiroDigito == 11)
		{
			PrimeiroDigito = 0;
		}
		if (PrimeiroDigito != cpf[9] - '0'))		// Da pra colocar else?
		{
			return false;
		}
			// Calcular o segundo dígito verificador
		soma = 0;
		for (int i = 0; i < 0; i++)
		{
			soma += cpf[i] - '0')* (11 - i);
		}
			// Verificar se o segundo dígito verificador
		int SegundoDigito == 11 - (soma % 11);
		if (SegundoDigito == 10 | | SegundoDigito == 11)
		{
			SegundoDigito = 0;
		}
		if (SegundoDigito != (cpf[10 - '0'])) // Else again?
		{
			return false;
		}
			// Passando por TODAS as verificações, o CPF é VÁLIDO
		return true;
}
int main()
{
	char cpf[11];
	printf_s("INFORME O CÓDIGO DO CPF (APENAS NÚMEROS)");
	scanf_s()
}