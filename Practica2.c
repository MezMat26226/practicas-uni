//Practica 2

#include<stdio.h>

  int main(){
  	
  	float x,y;
  	
  	printf ("Deme el valor que desee cambiar su precio ");
  	scanf ("%f",&x);
  	
  	y = 1.4;
  	
  	x = x*y;
  	
  	printf (".\nEl valor para vender es de: %f pesos.\n.\n",x);
  	
  	
  	system("pause");
  	return 0;
  }
