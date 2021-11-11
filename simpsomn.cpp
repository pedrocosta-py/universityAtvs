/* 

1-10 == 0 a 9 
x < 10 == 9
{2, 4, 1, 6, 4, 3, 7, 9, 4, 1}
{1, 1, 2, 3, 4, 4, 6, 7, 9}
> 

*/
//ordenada
#include <stdio.h>
#include <math.h>
#include "f.c"

void busca_Sequencial(){
	int n = 10; //tamanho do vetor (numero de elementos do vetor
	int p = 0; //variavel de indicação da posição
	int buscar;
	int vet[10] = {1, 1, 2, 6, 4, 3, 7, 9, 4, 1}; //vetor
	int resp[n];
	printf("Informe o numero que queira buscar ");
		scanf("%d", &buscar);
		
		for(int i = 0; i<n; i++)
		{
			
			if (vet[i] == buscar)
			{
				resp[p] = i;
				p++;
			}
			
		}
		
		if (p > 0)
		{
			
			for(int i = 0; i<p; i++)
			{
				printf("%i \n", resp[i]);
			}
			
		}
		
		else
		{
			printf("Numero nao encontrado");
		}
		
		//return 0;
}

int main()
{

//int vet[10] = {2, 4, 1, 6, 4, 3, 7, 9, 4, 1}; //vetor
//int n = 10; //tamanho do vetor (numero de elementos do vetor
int buscar;
//int resp[n];
//int p = 0; //variavel de indicação da posição
int i; //variavel para linhas de repetição
int lo;
//printf("quadrado %d\n\n", quadrado(2));
quadrado(2);


printf("digite um numero par:\n\n");
scanf("%d", &lo);
	while(lo%2==0) {
		busca_Sequencial();
		printf("digite um numero par:\n\n");
		scanf("%d", &lo);
	}
	//printf("quadrado %d\n\n", quadrado(2));
}