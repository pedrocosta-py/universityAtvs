#include <stdio.h>
#include <stdlib.h>

/*

NOMES: Pedro Arthur da Costa Novaes, Maria Luiza de Azevedo Silva Miguel, Andre Luiz Oliveira da Silva de Souza.
MATRICULAS: 2021100415, 2021100181, 2021100147.

*/

int main()
{

int vetor[10] = {2, 4, 1, 6, 4, 3, 7, 9, 4, 1}; //vetor
int tamanho = 10; //tamanho do vetor (numero de elementos do vetor
int procurar;
int valor[tamanho];
int posi = 0; //variavel de indicação da posição
int i; //variavel para linhas de repetição
	
	
	printf("======= BUSCA SEQUENCIAL NAO ORDENADA =======\n\n");
	printf("Qual o valor que quer buscar?\n");
	scanf("%d", &procurar);
	
	for(i = 0; i <= tamanho - 1; i++)
	{
		
		if (vetor[i] == procurar)
		{
			valor[posi] = i;
			posi = posi + 1;
		}
		
	}
	
	if (posi > 0)
	{
		
		for(i = 0; i <= posi - 1; i++)
		{
			printf("\nEste valor foi encontrado na posicionamento %i \n", valor[i]);
		}
	
	printf("\n\n======= FIM DO PROGRAMA =======");	
	
	}
	
	else
	{
		printf("\nValor nao encontrado.");
		printf("\n\n======= FIM DO PROGRAMA =======");	
	}
	
return 0;
}