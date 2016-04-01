/* exercise 1-14,rewrite the temperatureconversion program
  of Section 1.2 to use a function for conversion */
#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
float f-c(float);


int main(void)
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d  %6.1f\n", fahr, f-c(fahr));

    return 0;
}

float f-c(float fahr)
{
    return (fahr - 32) * 5 / 9;
}

