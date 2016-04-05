#include <stdio.h>

int mcd (int a, int b);

int main()
{
      int a,b,c,d;
      printf ("Ingrese 4 numeros :\n");
      scanf ("%d %d %d %d",&a,&b,&c,&d);

      printf ("MCD :%d\n",mcd( mcd ( mcd(a,b), c),d));
       

      return 0;
}

int mcd (int a, int b)
{
      if ((a % b) == 0)
            return b;
      else
            return mcd (b, a % b);
}
