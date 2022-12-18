#include <iostream.h>
#include <stdio.h>
#include <conio.h>

void main()
{
   int bil=2;
   int b=0;
	do
   {
      if (bil <20) { printf(" %d +",bil); }
      else { printf(" %d = ",bil); }
      b = b + bil;
      bil = bil + 2;
   }while(bil<=20);
   cout<<b;
   getch();
}
