#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void main()
{
	int a,b;

   clrscr();

  	/*Penggunaan Notasi Didepan Variabel*/
   a=10; b=5;

	printf("Nilai A \t\t= %d",a);	printf("\nNilai ++A \t\t= %d",++a);
  	printf("\nNilai B \t\t= %d",b); printf("\nNilai --B \t\t= %d",--b);

   cout<<endl<<endl;

  	/*Penggunaan Notasi Dibelakang Variabel*/
   a=10; b=5;
  	printf("Nilai A \t\t= %d",a);	printf("\nNilai A++ \t\t= %d",a++);
  	printf("\nNilai A \t\t= %d",a); printf("\nNilai B \t\t= %d",b);
   printf("\nNilai B-- \t\t= %d",b--);	printf("\nNilai B \t\t= %d",b);

	getch( );

}

