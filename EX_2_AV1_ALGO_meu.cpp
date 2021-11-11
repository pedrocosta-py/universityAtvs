#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define tamanhoMaximo 50

typedef struct registroGerenciamentoAuto{
    char modelo[15], placa[12], codigo[10];
    unsigned long int ano;
}registroGerenciamentoAuto;

void RegsCarro(){
    int cont = 1;
    registroGerenciamentoAuto registroAuto[tamanhoMaximo];
    int final = 0 ;
    printf("ºªºªºªºªºªººªºªºª BEM VINDO A TABELA DE REGISTROS ºªºªºªºªºªººªºªºª\n\n");
    	for(int j=0; j<tamanhoMaximo; j++){
				printf("qual o codigo do automovel ?\n");
		        fflush(stdin);
		        gets(registroAuto[j].codigo);
		        printf("qual o modelo do automovel ?\n");
		        fflush(stdin);
		        gets(registroAuto[j].modelo);
		        printf("qual a placa do automovel ?\n");
		        fflush(stdin);
		        gets(registroAuto[j].placa);
		        printf("Qual o ano do automovel ?\n");
		        fflush(stdin);
		        scanf("%d",&registroAuto[j].ano);
  
		}
	//impressão de valores: 
		   for(int j=1; j<=final; j++) {
			printf("seus registros sao:\n\n");
		    printf("A codigo do automovel digitado foi: %s\n", registroAuto[j].codigo);
		    printf("O modelo do automovel digitado foi: %s \n", registroAuto[j].modelo);
		    printf("A placa do automovel digitado foi: %s \n", registroAuto[j].placa);
		    printf("O ano do automovel digitado foi: %d \n", registroAuto[j].ano);
		}  
}
	        


int main( ){
	
	char cond;
	
	printf("\nDeseja continuar? Pressione S para 'sim', ou N para 'não'. ");
	scanf("%c", &cond);
	
	if (cond == 's' || cond == 'S')
	{
		RegsCarro();
	}
	
}
