#include<stdio.h>

void busca_Sequencial(){
	int n = 10; //tamanho do vetor (numero de elementos do vetor
	int p = 0; //variavel de indicação da posição
	int buscar;
	int vet[10] = {2, 4, 1, 6, 4, 3, 7, 9, 4, 1}; //vetor
	int resp[n];
	printf("Informe o numero que queira buscar ");
		scanf("%d", &buscar);
		
		for(int i = 0; i <= n-1; i++)
		{
			
			if (vet[i] == buscar)
			{
				resp[p] = i;
				p = p + 1;
			}
			
		}
		
		if (p > 0)
		{
			
			for(int i = 0; i <= p-1; i++)
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

printf("digite um numero par:\n\n");
scanf("%d", &lo);
	while(lo%2==0) {
		busca_Sequencial();
		printf("digite um numero par:\n\n");
		scanf("%d", &lo);
	}
}