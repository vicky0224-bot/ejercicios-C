/*

realice un programa que permita ingrsar por teclado 20 notas calcule el promedio genereal
y lo devuelva en pantalla

*/

#include<stdio.h>

int main(){

int nota =0;
int sumatoria=0;
float promedio=0;
	
	
for ( int i=0; i<20; i++){
	
	printf("ingresa la nota N# %d \n", i+1);
	scanf("%d", &nota);
	sumatoria= sumatoria+nota;
}


 promedio=sumatoria/20;
 
  printf(" el promedio de las notas : %.2f",promedio);
 
 return 0;
}