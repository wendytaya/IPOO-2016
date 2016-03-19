#include <stdio.h>
main()
{
	int fahr , celsius;
	int lower , upper , step;
	lower=0;
	upper =300;
	step=20;
	fahr =lower;
	printf ( "CELSIUS - FAHRENHEIT \n" );
	while(celsius <= upper){
		fahr =(9*celsius +160)/5;
		printf ("%d\t       %d\n", celsius, fahr);
		celsius=celsius +step;
	}
}
