/* exercise 1-13,  wirte a program to print a histogram of the lenght 
of words in its input. */
#include <stdio.h>
int main()
{
int c;
while((c=getchar())!=EOF){
if(c==' '|| c=='\n'||c=='\t')
putchar('\n');
else 
putchar('*');
}
return 0;
}
