#include<stdio.h>
main()
{
	int c,b;
	b=0;
	while((c=getchar()) !=  EOF) {
		if (c==' ' ){
			if (b!=' ')
			putchar(c);
		}	
		else
		putchar(c);
		b=c;
	}
}
