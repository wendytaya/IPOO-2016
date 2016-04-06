/* write a program to determinate the ranges of char,
short, int and long variables, both signed and unsigned, by
printing appropiate values from standard headers and by direct
computation. Harder if you compute them: determinate the ranges
of the various floating-point type*/
#include <stdio.h>
#include <limits.h>
int main(void)
{
    printf("Minimum Signed Char %d\n",CHAR_MIN);
    printf("Maximum Signed Char %d\n",CHAR_MAX);

    printf("Minimum Signed Short %d\n",SHRT_MAX);
    printf("Maximum Signed Short %d\n",SHRT_MIN);

    printf("Minimum Signed Int %d\n",INT_MAX);
    printf("Maximum Signed Int %d\n",INT_MIN);

    printf("Minimum Signed Long %ld\n",LONG_MAX);
    printf("Maximum signed Long %ld\n",LONG_MIN);

    /* Unsigned Maximum Values */

    printf("Maximum Unsigned Char %d\n",UCHAR_MAX);
    printf("Maximum Unsigned Short %d\n",USHRT_MAX);
    printf("Maximum Unsigned Int %u\n",UINT_MAX);
    printf("Maximum Unsigned Long %lu\n",ULONG_MAX);

    return 0;
}

