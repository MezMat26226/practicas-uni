//Burbuja

#include<stdio.h>

int main(){
	
	int x,y,aux;
	
	printf("Introduzca un valor: "); scanf("%i",&x);
	printf("Introduzca otro valor: "); scanf("%i",&y);
	
	aux = x;
	x = y;
	y = aux;
	
	
	printf("X es: %i.\n",x);
	printf("Y es: %i.\n",y);
	
	return 0;
}
