/* exercise 1-14,write a program  that prints
its input one word per line */
#include <stdio.h>
#define TNOCHAR 128 /*(0-127)elemntos de la  tabla ascii*/
int main(){
int c,i,j;
int character[TNOCHAR];
for(i=0;i<TNOCHAR;++i)
character[i] = 0;
while((c=getchar())!=EOF)
++character[c];
for(i=0;i<TNOCHAR;++i)
{
putchar(i);
for(j=0;j<character[i];++j)
putchar('*');
putchar('\n');
}
return 0;
}
