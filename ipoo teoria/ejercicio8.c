/* Leer por teclado tres numero naturales,
 imprimirlos en orden cresciente*/
#include <stdio.h>
main()
{
    int a, b, c;
    printf (" Introduzca tres numeros.\n");
	scanf ("%d %d %d", &a, &b, &c);
	if (a<b)
	{
		if (a<c)
		{
			if (b<c)
			printf (" El orden es %d, %d, %d. \n",a,b,c);
			else printf (" El orden es %d, %d, %d.\n",a,c,b);
		}
	}
	else
	{
		if (b<c)
		{
			if (a<c)
			printf (" El orden es %d, %d, %d.\n",b,a,c);
			else printf (" El orden es %d, %d, %d.\n",b,c,a);
		}
	}
}

