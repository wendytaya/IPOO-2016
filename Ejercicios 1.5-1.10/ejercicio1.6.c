/* Verify that the expresion getchar() != EOF is 0 or 1*/
#include<stdio.h>
main()
{
	int c;
	c=getchar();
	while(c !=  EOF) {
	putchar(c);
	c=getchar();
	}
	printf("%d\n",c !=  EOF);

}  

