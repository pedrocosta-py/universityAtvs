#include <stdio.h>
#include <stdlib.h>

int main(){
	int p, *k, *l, j;
	
	scanf("%d", &p);
	
	k = &p;
	
	scanf("%d", &j);
	
	l = &j;
	
	
	printf("%d \n\n",p);
	printf("%d \n\n", &p);
	printf("%d \n\n", k);
	printf("%d \n\n", &j);
	
}