/* 6. Leer por teclado un numero entero positivo n,
 calcular x^n*/
main(){
	int a,b,x,n;
	a=1;
	b=1;
	printf("Ingrese la base de la potencia: \n");
	scanf("%d",&x);
	printf("Ingrese un numero entero positivo: \n");
	scanf("%d",&n);
	while(a<=n){
		b=b*x;
		++a;}
	printf("El resulatdo de X^N: %d\n",b);
	
}

