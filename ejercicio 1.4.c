#include <stdio.h>
main()
{
	int fahr , celsius;
	int lower , upper , step;
	lower=300;
	upper =0;
	step=20;
	fahr =lower;
	printf ( "CELSIUS - FAHRENHEIT \n" );
	while(fahr>=upper ){
		fahr =(9*celsius +160)/5;
		printf ("%d\t       %d\n", celsius, fahr);
		celsius=celsius -step;
	}
}
