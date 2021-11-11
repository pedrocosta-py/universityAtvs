#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define tamanhoMaximo 50

typedef struct registroGerenciamentoAuto{
    char modelo[15], placa[12], codigo[10];
    unsigned long int ano;
}registroGerenciamentoAuto;

void teste (){
	int r, w; 
	char c; 
	registroGerenciamentoAuto registroAuto[tamanhoMaximo];
	//printf("Digite S para iniciar e N para não inciar:\n");
	//fflush(stdin); 
	//gets(c);
	//while(c == 'S' || c == 's'){
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
  		    printf("\n");
  		    printf("voce deseja continuar o codigo?\n numero 1 para continuar e 0 para parar\n");
			scanf("%d",&r);
			if(r==1){
				continue;
			}
			else{
				//j = 50;
				for(j=1; j<=tamanhoMaximo; j++) {
					printf("seus registros sao:\n\n");
		    		printf("A codigo do automovel digitado foi: %s\n", registroAuto[j].codigo);
		    		printf("O modelo do automovel digitado foi: %s \n", registroAuto[j].modelo);
		    		printf("A placa do automovel digitado foi: %s \n", registroAuto[j].placa);
		    		printf("O ano do automovel digitado foi: %d \n", registroAuto[j].ano);
		    	break; 
				}
			//break; 	
			}
		}
		//system("cls");
		//impressão de valores: 
		   //for(int a=1; a<=tamanhoMaximo; a++) {
			//printf("seus registros sao:\n\n");
		    //printf("A codigo do automovel digitado foi: %s\n", registroAuto[a].codigo);
		    //printf("O modelo do automovel digitado foi: %s \n", registroAuto[a].modelo);
		    //printf("A placa do automovel digitado foi: %s \n", registroAuto[a].placa);
		    //printf("O ano do automovel digitado foi: %d \n", registroAuto[a].ano);
		}  	
	//} 
	//printf("Digite S para iniciar e N para não inciar:\n");
	//fflush(stdin); 
	//gets(c);
//}