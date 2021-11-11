#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
	int indice_menor = 0;
	int v[10];
	//
	for (int i = 1; i < v[10]; i++) {
		fflush(stdin);
		scanf("%d", &v[i]);	
		if (v[i] < v[indice_menor])
			indice_menor = i;
	}

	// coloca o menor na primeira posição
	int aux = v[0];
	v[0] = v[indice_menor];
	v[indice_menor] = aux;
	
	printf("%d \n\n", &aux);
}
	