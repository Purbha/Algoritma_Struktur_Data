#include <iostream.h>
#include <conio.h>
//Untuk penggunaan printf
#include <stdio.h>

void main()
{
	//Program menghitung luas segitiga
   int alas ;
   int tinggi;
   float at;
   puts("Program menghitung luas segitiga");
   printf("Masukan nilai alas: ");
   scanf("%d",&alas);
   printf("Masukan nilai tinggi: ");
   scanf("%d",&tinggi);
   at = (alas*tinggi);
   printf("Luas segitiga adalah %.2f",at/2);
	getch();
}