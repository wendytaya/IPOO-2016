/*Leer por teclado un numero entero positivo n, 
calcular la suma de los nnumeros enteros positivos.*/
#include <stdio.h>
main(){
	int a,f;
	
	printf("Escriba un numero entero positivo \n");
	scanf( "%d",&a);
	if(a<=0){
		printf(" %d no es un entero positivo",a);
	}
	else{
		f=(a*(a+1))/2;
	printf("La suma de los %d primeros numeros es: %d\n",a,f);
	}

