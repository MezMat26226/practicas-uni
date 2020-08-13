//Asignación de valores

#include<stdio.h>
#define PI 3.1416

  int main(){
  	
  	float x,y;
  	
	printf ("\nDame el valor de x: ");
	scanf ("%f",&x);
    
  	printf ("\nDame el valor de y: ");
  	scanf ("%i",&y);
  	
	x = x/y;
  	
	printf("El valor de x es: %f.\n", x);
  	
  	system ("pause");
  	
	  return 0;
  } 
