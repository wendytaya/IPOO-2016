/*Write a program to copy its input to its output, 
replacing eachtab by \t, each backspace by \b,
 and each backslash by \\.This make tabs and backspaces
 visible in an unambiguous way  */

#include<stdio.h>

main()
{
  int c;

  while((c=getchar())!=EOF)
  {
    if(c=='\t')
    {
      putchar('\\');
      putchar('t');
    }

    if(c=='\b')
    {
      putchar('\\');
      putchar('b');
    }

    if(c=='\\')
    {
      putchar('\\');
      putchar('\\');
    }

    if(c !='\t' && c !='\b' && c!= '\\')
      putchar(c);
  }

return 0;

}

