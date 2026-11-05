/*

*/

#include <stdio.h>
#include <math.h>

#define PI 3.14155926535

int main(){
	  
	  	double radio,altura,area;
	  
	printf ("que operacion desea realizar");
	
	scanf  ("%d",&opciones)
	switch(opciones){
		
	case 1:
		
		printf("ingrese el radio del circulo: ");
        scanf("%lf",&radio);

	if(radio<=0){
	
       printf("radio invalido,no es posible calcular");
	}

	else{
	
	area=(radio*radio)*PI;
	printf ("el area es: %.2f \n",area);

	}
	break;
		
    case 2:
		printf("la base de un triangulo");
	
        scanf("%lf",&base);

	if(base<=0 || altura<=0){
	
       printf("base y/o altura invalida,no es posible calcular");
	}
	
	else{
	
	base=(base*altura)/2;
	printf ("el area es: %.2f \n",area);
		break;
			
	case 3:
		printf("el area de un cuadrado");
		break;
	 

}

