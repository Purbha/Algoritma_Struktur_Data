/*Program String*/
#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void main()
{
   puts("=================================");
   puts("  Contoh Penggunaan Fungsi Gets");
   puts("=================================");

	char nama[20];
   /*
   	Fungsi gets() digunakan untuk memasukkan data bertipe karakter dan
   	tidak dapat digunakan untuk memasukkan data numerik.
   */
	printf("Masukan Nama Anda: ");gets(nama);
	printf("Nama Anda Adalah: %s \n",nama);
   getch();

   clrscr();
   puts("=================================");
   puts(" Contoh Penggunaan Fungsi Strcpy");
   puts("=================================");
 	char kata1[20];
	char kata2[20];
	cout<<"Masukkan Kata 1 = ";gets(kata1);
 	cout<<"Masukkan Kata 2 = ";gets(kata2);
   cout<<endl;
   printf("Kata 1 adalah %s dan kata 2 adalah %s",kata1,kata2);
   cout<<endl;
   cout<<"strcpy(kata1,kata2)";
	/*Proses*/
	strcpy(kata1,kata2);
   cout<<endl;
   printf("Sekarang nilai dari kata 1 adalah %s dan kata 2 adalah %s",kata1,kata2);
	getch( );
}

