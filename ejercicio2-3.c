/*write a loop equivalent to the for loop above without
 using && or || */
/* for example the input function getline that we wrote
in chapter 1:
for (i=0;i<lim-1 && (c=getchar()) !='\n' && c!=EOF;++i)
s[i] =c;
         */
#include <stdio.h>
#include <ctype.h>

int my_getline(char s[]);
void atoi(char s[]);
int _atoi(char h);

int my_getline(char s[]) {
    
    int c, i = 0;
    
    while ((c=getchar())!=EOF) {
        s[i] = c;
        ++i;
        
        if (c == '\n') break;
    }
    
    s[i] = '\0';
    
    return i;
}

void atoi(char s[])
{
    int i = 0;
    
    if (s[i] == '0' && tolower(s[i+1]) == 'x') {
        i = 2;
    }
  
    for (i; s[i] != '\0'; i++) {
        printf ("%i", _atoi(tolower(s[i])));
    }
    putchar('\n');
}

int _atoi (char h)
{
    if (h == '\n') {
        return 0;
    }

    if (isdigit (h)) {
        return h - '0';
    }
    
    return 10 + h - 'a';
}

int main()
{
    char line[1000];
    
    while (my_getline(line)) {
        atoi (line);
    }

}
