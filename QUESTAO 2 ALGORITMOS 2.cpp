#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//globalizando procedimentos

void ssort();
void isort();
	

void ssort(int value[], int nn)
{
	int smaller, aux; //menor valor do vetor
	system("cls");
	
	for(int i = 0; i < nn; i++) {
		smaller=i;
		for(int k = i+1; k < nn; k++) {
			
			if(value[smaller]>value[k]) //comparando com o menor
			
			smaller = k;	
		}
		
		if(i!= smaller) // troca
		
		{
			aux = value[i];
			value[i]=value[smaller];
			value[smaller]=aux;
		}
		
	}
	printf("SEUS VALORES ORDENADOS (por selection sort): \n\n");
	for(int p = 0; p<nn; p++)
	{
		printf("%d - ", value[p]);
	}
	system("pause");
}

void isort(int value[], int nn)
{
	int aux1;
	int k;
	for(int i = 0; i < nn; i++)
	{
	aux1 = value[i];
		for(k = i; (k > 0) && (aux1 < value[k-1]); k--)
		{
			value[k] = value[k - 1];
			value[k] = aux1;
		}
	}
	
	printf("SEUS VALORES ORDENADOS (por insertion sort): \n\n");
	for(int p = 0; p<nn; p++)
	{
		printf("%d - ", value[p]);
	}
	system("pause");
}
	int main()
{
	system("cls");
	int i, h, nn=10;
	int value[nn];
	
	
    printf("******* TRABALHANDO ORDENACAO! ******* ");
    printf("\nESCOLHA DEZ VALORES INTEIROS! ");
    
    for(i = 0; i<10; i++)
    {
    	h = i + 1;
    	printf("\nSEU VALOR NUMERO %d: ", h);
    	scanf("%i", &value[i]);
	}
    
    int x;
    do{
	    system("cls");
	    
	    printf("ESCOLHA UMA OPCAO PARA ORDENAR\n");
	    printf("\n [1] ORDENACAO PELO METODO ''SELECTION SORT''.\n");
	    printf("\n [2] ORDENACAO PELO METODO ''INSERTION SORT''.\n");
	    printf("\n [0] SAIR.");
	    
	    printf("\n\nSEU COMANDO SERA: ");
	    scanf("%i", &x);
    
    switch (x)
    {
        case 1: 
			
			void ssort(int value[], int nn); 
		break;
        case 2: 
			
			void isort(int value[], int nn); 
		break;
		default:
			printf("Digite uma das opcoes acima \n");
		break;
    }
    
    } while (x!=0);
}
