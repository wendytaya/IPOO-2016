/* Write a program to copy its unput to its output, 
replacing each string of one or more blanks
 by a single blank*/
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
