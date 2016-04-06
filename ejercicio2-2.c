/*write a loop equivalent to the for loop above without
 using && or || */
/* for example the input function getline that we wrote
in chapter 1:
for (i=0;i<lim-1 && (c=getchar()) !='\n' && c!=EOF;++i)
s[i] =c;
              */
#include<stdio.h>
for (i=0;i< lim-1;++i){
if((c=getchar()) != '\n'{
if(c!= EOF){
s[i]=c;
}
}
}    
