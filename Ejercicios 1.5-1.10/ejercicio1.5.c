#include <stdio.h>
main()
{
	int fahr , celsius;
	int lower , upper , step;
	lower=300;
	upper =0;
	step=20;
	celsius=lower ;
	printf ( "CELSIUS - FAHRENHEIT \n" );
	while(celsius>=upper){
		fahr =(9*celsius +160)/5;
		printf ("%d\t       %d\n", celsius, fahr);
		celsius=celsius-step;
	}
}

