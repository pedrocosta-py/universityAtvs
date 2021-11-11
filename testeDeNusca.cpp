#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//
#define MAX 10
typedef struct testeDeBusca{
		int vet[80];
		char wild[90];
	}testeDeBusca;	
	
int main(){
	testeDeBusca Busca[MAX];
	int i, j;
	
	
	for(i=0; i<MAX; i++){
		printf("Digite o primeiro %d valor \n\n", i);
		fflush(stdin);
		scanf("%d", &Busca[i].vet);
		printf("qual o nome do %d valor ?\n\n", i);
		fflush(stdin);
		gets(Busca[i].wild);
		
		//
		printf("Impressao %d \n\n", Busca[i].vet);
		printf("Impressao %s \n\n", Busca[i].wild);
		
		
		//
		if((Busca[i].wild=="Pedramenon")&&(Busca[i].wild == "P")){
				printf("isso ai\n\n");
				break;
			}
			else{
				printf("nao eh isso\n\n");
			}
	}
		//busca??
		
		//for(j=0; j<MAX, j++){
		//	if(Busca[i].wild == "Pedramenon" ){
				//printf("isso ai\n\n");
				///break;
			//}
		//	else{
				//printf("nao eh isso\n\n");
				//break;
		//	}
	//	}
}

