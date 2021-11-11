#include <stdio.h>
#include <stdlib.h>

/*

NOMES: Pedro Arthur da Costa Novaes, Maria Luiza de Azevedo Silva Miguel, Andre Luiz Oliveira da Silva de Souza.
MATRICULAS: 2021100415, 2021100181, 2021100147.

*/

void buscaOrdenada(int *V, int N, int elem) { //em ordem: um vetor, tamanho dele e o elemento que quero procurar

  int i; // variavel para estrutura de repetição

	for(i = 0; i<N; i++) //aqui vamos percorrer todo o vetor
	{
		 if(elem == V[i]) //nesse passo iremos verificar se o elemento é igual a posição i do vetor
    {
			printf("valor encontrado! seu valor eh: %d \n", i); //elemento encontrado e irá retornar o indice dele
     }
		 else
		 {
		 if(elem < V[i])
		 
		 	printf("valor nao encontrado\n"); //e aqui, se entrar nessa condição, a busca será parada, já que o valor
     }
	}

}

int main() {
		
int vetor[7] = {-8, 4, 21, 23, 54, 67, 90}; // vetor
int tamanho = 7; //tamanho
int elemento;
int resultado;

printf("Qual o valor que quer buscar? ");
scanf("%d", &elemento);

buscaOrdenada(vetor, tamanho, elemento);
}