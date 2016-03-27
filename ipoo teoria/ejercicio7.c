/* Leer por teclado un numero entero positivo n,
 calcular n! */
#include <stdio.h> 
main() 
     {
	 int n,i, factorial;
	 factorial=1;
	 i=1;
	 printf("Ingrese un numero entero positivo \n");
	 scanf("%d",n);
	 
	 if (n<=0){
	 	printf("%d no es un entero positivo",n);
	 	}
	 	
	 else{
	 	while(i<=n)
	 	{
	 		factorial=factorial*i;
	 		i++;
		 }
		 printf("%d! equivale a: %d\n",n,factorial);
	 }	
}

