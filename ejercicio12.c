/* exercise 1-11, how woould you test the word count program?
what kinds of input are mostlikely to uncover bugs if there are any ?

/* exercise 1-12,write a program  that prints
its input one word per line */
#include <stdio.h>
int main (){
int c;
c=getchar();
while (c !=EOF){
if (c==' '){
putchar('\n');
}
else{
putchar(c);
}
c=getchar();
}
}
