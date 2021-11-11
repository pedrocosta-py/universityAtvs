#include<stdio.h>
#include<stdlib.h>

#define tamanhoMax 10

typedef struct livraria {
	int numeroPaginas, ano;
	char ISBN[17], titulo[50], autor[50];
} livraria;

int main() {

	int continuar = 1;
	int tamanhoFinal = 0;
	livraria livros[tamanhoMax];
	
	// ARMAZENANDO VALORES
	for(int i = 1; i <= tamanhoMax; i++) {
		printf("Informe o ISBN do livro (000-00-00000-00-0): ");
		fflush(stdin);
		gets(livros[i].ISBN);
		printf("Informe o titulo do livro: ");
		fflush(stdin);
		gets(livros[i].titulo);
		printf("Informe o autor do livro: ");
		fflush(stdin);
		gets(livros[i].autor);
		printf("Informe o ano do livro: ");
		scanf("%d", &livros[i].ano);
		printf("Informe a quantidade de paginas do livro: ");
		scanf("%d", &livros[i].numeroPaginas);
		
		printf("\n");
		
			if(i <= tamanhoMax - 1) {
				printf("Deseja cadastar mais um livro? [1 = SIM][OUTRO NUMERO = NAO]: ");
				scanf("%d", &continuar);
				printf("\n");
				
				if(continuar != 1) {
					tamanhoFinal = i;
					break;
				}
			}
		
		tamanhoFinal = i;
	}
	system("cls");
	
	// IMPRIMINDO VALORES
	for(int i = 1; i <= tamanhoFinal; i++) {
		printf("========= LIVRO %d =========", i);
		printf("\n");
		printf("ISBN: %s\n", livros[i].ISBN);
		printf("Titulo: %s\n", livros[i].titulo);
		printf("Autor: %s\n", livros[i].autor);
		printf("Ano: %d\n", livros[i].ano);
		printf("Numero de paginas: %d\n", livros[i].numeroPaginas);
		printf("\n");
	}
}
