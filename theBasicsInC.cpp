//by: sudoAptIPedro
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
//
//basic procedure for multiplication
void multiplication(int n, int tam){
    int multi;
    for(int i = 1; i<=tam; i++){
        multi = i*n;
        printf("\n\n--> | %d x %d = %d | \n ", n, i, multi);
    }
}
//
//basic procedure for division
void division(int y, int tam){
    int divi;
    for(int i=1; i<=tam; i++){
        divi = (y/i);
        printf("\n\n--> | (%d / %d) = %d | \n ", y, i, divi);
    }
}
//
//basic procedure for rest
void rest(int b, int tam){
    int resto;
    for(int i=1; i<=tam; i++){
        resto = ((b)%(i));
        printf("\n\n--> | (%d // %d) = %d | \n ", b, i, resto);
    }
}
//
//basic procedure for subtracting
void subtracting(int x, int tam){
    int subtra;
    for(int i=1; i<=tam; i++){
        subtra = x-i;
        printf("\n\n--> | (%d - %d) = %d | \n ", x, i, subtra);
    }
}
//
//basic procedure for addition
void addition(int m, int tam){
    int add;
    for(int i=1; i<=tam; i++){
        add = m+i;
        printf("\n\n--> | (%d + %d) = %d | \n ", m, i, add);
    }
}

// begin main function
int main(){
    int number;
    int tam;
    int option;
    int sabe;
    printf("--> Digite um numero par para iniciar o programa \n -->");
    scanf("%d", &sabe);
    while(sabe%2==0){
        //
        printf("Bem vindo ao programa que soma, multiplica, divide, subtrai e lhe da o resto de divisoes sob um tamanho definido pelo usuario!\n\n --> Escolha sua opcao: \n\n");
        printf("\n [1] - MULTIPLICACAO \n [2] - DIVISAO \n [3] - RESTO \n [4] - SUBTRACAO \n [5] - ADICAO \n\n --> Digite sua opcao \n -->");
        scanf("%d", &option);
        switch (option){
            //multiplicacao
            case 1:
                printf("\n --> Voce escolheu saber a multiplicacao de um determinado elemento! \n");
                printf("\n--> Digite o numero \n -->");
                scanf("%d", &number);
                printf("\n --> Digite o tamanho \n -->");
                scanf("%d", &tam);
                printf("--> O resultado da sua multiplicacao eh:");
                multiplication(number, tam);
            break;  
            //divisao
            case 2:
                printf("\n --> Voce escolheu saber a divisao de um determinado elemento! \n");
                printf("\n--> Digite o numero \n -->");
                scanf("%d", &number);
                printf("\n --> Digite o tamanho \n -->");
                scanf("%d", &tam);
                printf("--> O resultado da sua divisao eh:");
                division(number, tam);
            break;
            //resto
            case 3:
                printf("\n --> Voce escolheu saber o resto de um determinado elemento! \n");
                printf("\n--> Digite o numero \n -->");
                scanf("%d", &number);
                printf("\n --> Digite o tamanho \n -->");
                scanf("%d", &tam);
                printf("--> O resultado do seu resto eh:");
                rest(number, tam);
            break;
            //subtracao
            case 4:
                printf("\n --> Voce escolheu saber a subtracao de um determinado elemento! \n");
                printf("\n--> Digite o numero \n -->");
                scanf("%d", &number);
                printf("\n --> Digite o tamanho \n -->");
                scanf("%d", &tam);
                printf("--> O resultdo da sua subtracao eh:");
                subtracting(number, tam);
            break;
            //soma
            case 5:
                printf("\n --> Voce escolheu saber a adicao de um determinado elemento! \n");
                printf("\n--> Digite o numero \n -->");
                scanf("%d", &number);
                printf("\n --> Digite o tamanho \n -->");
                scanf("%d", &tam);
                printf("--> O resultdo da sua adicao eh:");
                addition(number, tam);
            break;
            //
            default:
                printf("\n\n--> DIGITE UM NUMERO VALIDO!\n\n");
            break;
            //
        }//final switch condition
        printf("\n\n\n-->Deseja continuar? \n --> Digite um numero par para iniciar o programa \n -->");
        scanf("%d", &sabe);
    }
    printf("\n = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n P R O G R A M A \n F I N A L I Z A D O \n = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n "); 
    system("pause");
    return 0;
    
}
//end main function