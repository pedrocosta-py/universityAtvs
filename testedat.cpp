#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int vet[5], i;
    FILE *arq;
    for(i = 0; i<5; i++){
        printf("--> entre com os dados do vetor:\n -->");
        scanf("%d", &vet[i]);
    }
    arq = fopen("binario.dat", "w+b");
    if(arq!=NULL){
        fwrite(vet, sizeof(int), 5, arq);
    }
    fseek(arq, 0, SEEK_SET);
    fread(vet, sizeof(int), 5, arq);
    for(i=0; i<5; i++){
        printf("--> valores: %d\n", vet[i]);
    }
    fclose(arq);
    return 0;
}