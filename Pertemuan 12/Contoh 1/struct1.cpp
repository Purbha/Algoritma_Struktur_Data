/* Program Penggunaan Struct */
#include "stdio.h"
#include <iostream.h>
#include "conio.h"

void garis(int a)
{
   int i;
	printf("\n");
	for (i=1;i<=a;i++) { printf("="); }
	printf("\n");
}

void main()
{
	struct data
   {
   	char nama[15];
      char nim[10];
   	int nilai;
   };

   data mahasiswa;
   cout<<"Masukan Nama : ";cin>>mahasiswa.nama;
   cout<<"NIM          : ";cin>>mahasiswa.nim;
   cout<<"Nilai Total  : ";cin>>mahasiswa.nilai;
   garis(20);
   cout<<"Data Mahasiswa"<<endl;
   cout<<"Nama Mahasiswa: "<<mahasiswa.nama<<endl;
   cout<<"NIM           : "<<mahasiswa.nim<<endl;
   cout<<"Nilai Total   : "<<mahasiswa.nilai<<endl;
	getch();
}