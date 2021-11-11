#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int const MAX = 50;
typedef struct registroDeLivros{
    char isbn[30], titulo[100], autor[20];
    unsigned long int ano, numPaginas;
}registroDeLivros;

int main(){
    int cont;
    registroDeLivros registroLivros[MAX];
    printf("ºªºªºªºªºªººªºªºª BEM VINDO AO REGISTRO DE LIVROS ºªºªºªºªºªººªºªºª\n\n");
    printf("para comecar, digite um numero par:\n");
    fflush(stdin);
    scanf("%d",&cont);
    
    //repeticao:

    while(cont%2==0){
    	//for(int i=0; i<MAX; i++){
	        printf("qual seu codigo isbn ? \n");
	        fflush(stdin);
	        gets(registroLivros[MAX].isbn);
	        printf("qual o titulo do livro ? \n");
	        fflush(stdin);
	        gets(registroLivros[MAX].titulo);
	        printf("quem eh o autor do livro ? \n");
	        fflush(stdin);
	        gets(registroLivros[MAX].autor);
	        printf("Qual o ano da edicao ? \n");
	        fflush(stdin);
	        scanf("%d",&registroLivros[MAX].ano);
	        printf("Qual o numero de paginas do livro ? \n");
	        fflush(stdin);
	        scanf("%d",&registroLivros[MAX].numPaginas);
	        //
		    //system("cls");
	        //impressoes:
	       // printf("seus registros sao:\n\n");
	        //
	        //printf("O codigo isbn eh : %s \n\n", registroLivros[i].isbn);
	        //printf("O nome do titulo eh : %s \n\n", registroLivros[i].titulo);
	        //printf("o autor eh: %s \n\n", registroLivros[i].autor);
	        //printf("O ano da edicao do livro foi: %d \n\n", registroLivros[i].ano);
            //rintf("O numero de paginas digitado foi: %d \n\n", registroLivros[i].numPaginas);
		//}
		printf("deseja continuar a registrar? \n\n");
        scanf("%d", &cont);
    }
    		system("cls");
	        //impressoes:
	        printf("seus registros do %d livro sao:\n\n");
	        //
	        printf("O codigo isbn eh : %s \n\n", registroLivros[MAX].isbn);
	        printf("O nome do titulo eh : %s \n\n", registroLivros[MAX].titulo);
	        printf("o autor eh: %s \n\n", registroLivros[MAX].autor);
	        printf("O ano da edicao do livro foi: %d \n\n", registroLivros[MAX].ano);
            printf("O numero de paginas digitado foi: %d \n\n", registroLivros[MAX].numPaginas);
		//}
	printf("- _ - _ -_ -P R O G R A M A  E N C E R R A D O- _ - _ -_ -\n\n");
}