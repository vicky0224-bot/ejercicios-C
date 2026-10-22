/*

realice un programa que permita realizar las siguientes operaciones suma de dos
 numeros.resta .multiplicacion y divicion

*/

#include <stdio.h>

int main(){
	
	
	float n1 =0;
	float n2 =0;
	char opc ='';
 
 printf("que desea hacer");
 printf ("sumar ---> 1");
 printf ("restar --->2");
 printf ("multiplicar--->3");
printf ("division--->4");
	
	scanf("%c" ,&opc);
	
	swicht(opc){
		
	case '1':
	printf("ingrese el valor del primer numero");
		scanf("%f" ,&n1);
	printf ("ingrese el valor del segundo numero");
		scanf("%f" ,&n2);
	resultado= n1 + n2;
	printf("el resultado de la suma es %f, ")
	break;
	  
		
		
	}
	
	
	
	
	
	
}