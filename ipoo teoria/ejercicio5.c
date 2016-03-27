/*Leer por teclado un numero entero positivo n,
 imprimir la suma de los numeros primos 
enteros positivos menores que n.*/
#include <stdio.h>
 


int main() 
     { 
     int n, d,a; 
     int s=0; 
     printf("Escriba un entero positivo\n");
     scanf("%d",&a);
     for (n=2; n<a; n++) 
       { 
       
       for (d=2; n%d !=0; d++); 
       if (d == n) 
         { 
         printf("%i  ",n); 
         s=s+n; 
         } 
       } 
     printf("\nLa suma de los numeros primos es: %d\n",s);  /* getch()  hace una pausa hasta que ingreses algo del teclado */

     }

