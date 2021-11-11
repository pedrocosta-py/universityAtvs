#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Nome: André Luiz Oliveira da Silva de Souza, Pedro Arthur da Costa Novaes, Maria Luiza de Azevedo Silva Miguel (Angelo)

#define tamanhoMaximo 50

typedef struct registroGerenciamentoAuto{
    char modelo[15], placa[12], codigo[10];
    unsigned long int ano;
}registroGerenciamentoAuto;

int main(){
    int cont;
    int TESTE;
    registroGerenciamentoAuto registroAuto[tamanhoMaximo];
    printf("ºªºªºªºªºªººªºªºª BEM VINDO A TABELA DE REGISTROS ºªºªºªºªºªººªºªºª\n\n");
    

    	for(int i=0; i<tamanhoMaximo; i++){
	        printf("qual o codigo do automovel ?\n\n");
	        fflush(stdin);
	        gets(registroAuto[i].codigo);
	        printf("qual o modelo do automovel ?\n\n");
	        fflush(stdin);
	        gets(registroAuto[i].modelo);
	        printf("qual a placa do automovel ?\n\n");
	        fflush(stdin);
	        gets(registroAuto[i].placa);
	        printf("Qual o ano do automovel ?\n\n");
	        fflush(stdin);
	        scanf("%d",&registroAuto[i].ano);
	        //
	
	        //impressoes:
	        printf("seus registros sao:\n\n");
	        //
	        printf("A codigo do automovel digitado foi: %s \n\n", registroAuto[i].codigo);
	        printf("O modelo do automovel digitado foi: %s \n\n", registroAuto[i].modelo);
	        printf("A placa do automovel digitado foi: %s \n\n", registroAuto[i].placa);
	        printf("O ano do automovel digitado foi: %d \n\n", registroAuto[i].ano);
	        
	        printf("\n\nEscreva 1 para continuar e 0 para parar. ");
	        scanf("%d", &TESTE);
	        
	        if(TESTE == 0)
	        {
	        	printf("- _ - _ -_ -P R O G R A M A  E N C E R R A D O- _ - _ -_ -\n\n");
	        	i = 51;
	        	
			}
	        
		}


}
