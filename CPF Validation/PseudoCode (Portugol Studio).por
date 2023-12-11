	programa
	{
		funcao inicio ()
		{
			inteiro indice, cpf[11], dv[2], soma=0, loop=-1
				// Leitura do CPF
			para (indice=0;indice<11;indice++)
			{
				escreva("\nDIGITE O ",indice+1,"* NÚMERO DO CPF: ")
				leia(cpf[indice])
			}
				// Verifiação dos dois digitos-verificadores
			faca
			{
				loop++
				para (indice=9+loop;indice>-1;indice--)
				{
						// Multiplicação e somatório nas duas voltas
					escolha (loop)
					{
						caso 0:
							soma+=cpf[indice]*(11-indice)
						caso 1:
							soma+=cpf[indice]*(12-indice)
					}
				}
					// Teste do resto da divisão
				se (soma%11<2)
				{
					dv[0+loop]=0
				}
				senao
				{
					dv[0+loop]=11-(soma%11)
				}
						
			} enquanto (loop==1)
				// Informará o CPF digitado anteriormente
			escreva("\nCPF INFORMADO: ")
			para (indice=0;indice<11;indice++)
			{
				escreva(cpf[indice]," ")
					
			}
				// Cpf verdadeiro
			escreva("\nCPF VERÍDICO: ")
			para (indice=0;indice<9;indice++)
			{
				escreva(cpf[indice]," ")
			}
			escreva(dv[0]," ",dv[1])
		}
	}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 584; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */