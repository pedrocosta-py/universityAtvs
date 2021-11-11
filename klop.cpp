#include <stdio.h>
int main(){
int m1[3][3], m2[3][3], mSoma[3][3];
int lin, col;
for (lin=0; lin<3;lin++)
for (col=0; col<3; col++){
printf(“Informeum valor: ”);
scanf(“%d”,&m1[lin][col]);
}
for (lin=0; lin<3;lin++)
for (col=0; col<3; col++){
printf(“Informeum valor: ”);
scanf(“%d”,&m2[lin][col]);
mSoma[lin][col]= m1[lin][col]+m2[lin][col];
}
printf(“Matrizsoma”);
for (lin=0; lin<3;lin++)
for (col=0; col<3; col++){
printf(“%d ”,mSoma[lin][col]);
}
}