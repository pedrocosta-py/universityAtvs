#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//void theArchives(); 

int const MAX = 10;

typedef struct lista_clientes{
    char nomeCompleto[100], endereco[100] , telefone[21];
    int idade;
}lista_clientes;

// void theArchives(){

// }

int main() {

	int continuar = 2;
	int tamanhoFinal = 0;
	int *idade;
	lista_clientes clientes[MAX];
	FILE *clientesCadastro;
	
	clientesCadastro = fopen("clientes.txt", "w");
	
	// ARMAZENANDO VALORES
	for(int i=0; i<MAX; i++){
		printf(" -> Por favor, digite seu nome de até 100 caracteres:\n");
		//entrada de dados para exibiçao no console
        fflush(stdin);
        gets(clientes[i].nomeCompleto);
		//escrita de dados no arquivo.txt
            if(clientesCadastro != NULL){
                printf("DADOS CADASTRADOS\n");
                fprintf(clientesCadastro, clientes[i].nomeCompleto);
                fprintf(clientesCadastro, "\n\n");
            }else{
                printf("Dados não cadastrados! Verifique seu arquivo!");
            }
		//
        printf("\n\n -> Por favor, digite seu endereco de ate 100 caracteres:\n");
        //entrada de dados para exibiçao no console
		fflush(stdin);
        gets(clientes[i].endereco);
		//escrita de dados no arquivo.txt
            if(clientesCadastro != NULL){
                printf("DADOS CADASTRADOS\n");
                fprintf(clientesCadastro, clientes[i].endereco);
                fprintf(clientesCadastro, "\n\n");
            }else{
                printf("Dados não cadastrados! Verifique seu arquivo!");
            }
		//
        printf("\n\n -> Por favor digite seu numero de telefone de acordo com o exemplo abaixo \n +55 (21) 99999 - 9999 \n\n -> Digite por favor:\n");
        //entrada de dados para exibiçao no console
		fflush(stdin);
        gets(clientes[i].telefone);
		//escrita de dados no arquivo.txt
            if(clientesCadastro != NULL){
                printf("DADOS CADASTRADOS\n");
                fprintf(clientesCadastro, clientes[i].telefone);
                fprintf(clientesCadastro, "\n\n");
            }else{
                printf("Dados não cadastrados! Verifique seu arquivo!");
            }
		//
        printf("\n\n -> Por favor, digite sua idade:\n");
		//entrada de dados para exibiçao no console
        fflush(stdin);
        scanf("%d", &clientes[i].idade);
		//escrita de dados no arquivo.txt
            if(clientesCadastro != NULL){
                printf("DADOS CADASTRADOS\n");
                //*idade = clientes[i].idade; 
                // fputs(clientes[i].idade);
                fprintf(clientesCadastro, "\n\n");
            }else{
                printf("Dados não cadastrados! Verifique seu arquivo!");
            }
		//
		
		printf("\n");
		
			if(i<=MAX-1) {
				printf("Deseja realizar mais um cadastro? Digite 2 para continuar\n\n");
				scanf("%d", &continuar);
				printf("\n");
				
				if(continuar!=2) {
					tamanhoFinal = i;
					break;
				}
			}
		
		tamanhoFinal = i;
	}
	system("cls");
	
	// IMPRIMINDO VALORES
	for(int i = 1; i <= tamanhoFinal; i++) {
		printf("seus registros sao:\n\n");
	    //
	    printf("O nome digitado foi : %s\n\n",clientes[i].nomeCompleto);
	    printf("O endereco digitado foi : %s\n\n",clientes[i].endereco);
	    printf("O telefone digitado foi: %s\n\n",clientes[i].telefone);
	    printf("A idade digitada foi: %s\n\n",clientes[i].idade);
	}
}
