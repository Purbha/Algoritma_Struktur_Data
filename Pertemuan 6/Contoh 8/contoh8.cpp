#include <iostream.h>
#include <stdio.h>
#include <conio.h>

void main()
{
   int a,b,c;
	for (a=1;a<=9;a+=2)
   {
      b=1; c=1;
   	do
      {
         c = c * b;
         if (a == b) {cout<<b<<" = "<<c;} else {cout<<b<<" * ";}
         b = b + 2;
      }while(b<=a);
      cout<<endl;
   }
   getch();
}