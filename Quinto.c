//Quinto

#include<stdio.h>
#include<math.h>

 int main(){
 	
   int x,y;
   
   x = 10;
   y = 2;
   
   //Operaciones Básicas
   
   x += y; //x = x+y, == x += y
   printf ("El valor de x es: %i.\n", x);
   
   x -= y;
   printf ("El valor de x es: %i.\n", x);
   
   x *= y;
   printf ("El valor de x es: %i.\n", x);
   
   x = x/y;
   printf ("El valor de x es: %i.\n",x);
   
   //x = x%y; Es para obtener el resto
   //printf ("El valor de x resto de y es: %i.\n",x);
   
   //Potencia
   x = pow (y,x);
   printf ("El valor de y elevado a x es: %i.\n",x);  
   
   //Raíz cuadrada
   x = sqrt (x);
   printf ("El valor de la raíz cuadrada de x es: %i.\n",x);
   
   //Operadores de incremento
   
   x++;
   printf ("El valor de x es: %i.\n",x);
   
   x--;
   
   printf ("El valor de x es: %i.\n",x);
   
   system("pause");
   return 0;	
 }
