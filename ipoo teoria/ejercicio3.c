/*Leer por teclado un conjunto de numeros enteros no nulos,
 terminando en CERO, imprimir sus cuadrados. */
#include <stdio.h>
main(){
	int a,n;
	n=0;
	printf("Escriba una serie de numeros enteros no nulos \n");
	while(n<=10){
		scanf( "%d",&a);
		if(a!=0){
			
			printf("El cuadrado de %d es %d\n",a,a*a);
			n=n+1;	
		}
		else {
			printf("%d es un numero nulo\n",a);
			return 0;
		
		}
	}
}
/* Obviando que termine en cero */
