#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

//constante por controle:
int const tamMAX = 10;

typedef struct pontosPlanoCartesiano{
    int absci_x, coord_y;

}pontosPlanoCartesiano;

int main(){
    int i, j;
	int tamFinal = 0;
    pontosPlanoCartesiano pontos[tamMAX];

    while(j%2==0){
        for(i=0; i<tamMAX; i++){
            printf("--> digite seu ponto no plano das abscissas: \n -->");
            fflush(stdin);
            scanf("%d", &pontos[i].absci_x);
            printf("--> digite seu ponto no plano das coordenadas: \n -->");
            fflush(stdin);
            scanf("%d", &pontos[i].coord_y);
            //
            printf("\n\n");
            if(i < tamMAX){
                printf("deseja cadastrar mais um numero?\n");
                scanf("%d", &j);
                   //     
                    if ((j!=0) and (j!=NULL)){
                        tamFinal = i;
                        break;
                    }
                    
            }
                tamFinal = i;
        }
                //
        system("cls");
        for(i=0; i<tamMAX; i++){
            if((pontos[i].absci_x!=NULL and pontos[i].coord_y!=NULL)){
                //pontos no primeiro quadrante:
                if(pontos[i].absci_x > 0 && pontos[i].coord_y > 0){
                    printf("Pontos do primeiro quadrante:\n\n");
                    printf("valor de x eh: %d \n valor de y eh: %d \n", pontos[i].absci_x, pontos[i].coord_y);
                }
                
                if(pontos[i].absci_x < 0 && pontos[i].coord_y > 0){
                        printf("Pontos do Segundo Quadrante:\n\n");
                        printf("valor de x eh: %d \n valor de y eh: %d \n", pontos[i].absci_x, pontos[i].coord_y);
                }

                if(pontos[i].absci_x < 0 && pontos[i].coord_y < 0){
                    printf("Pontos do Terceiro Quadrante:\n\n");
                    printf("valor de x eh: %d \n valor de y eh: %d \n", pontos[i].absci_x, pontos[i].coord_y);
                }
                 if(pontos[i].absci_x==0 && pontos[i].coord_y==0){
                    printf("Pontos do Quarto Quadrante:\n\n");
                    printf("valor de x eh: %d \n valor de y eh: %d \n", pontos[i].absci_x, pontos[i].coord_y);
                }
            }
        }
    }
}
