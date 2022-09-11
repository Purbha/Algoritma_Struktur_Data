/*
****************************************
	Penggunaan Prototipe Pada Fungsi
****************************************
*/
#include "stdio.h"
#include <conio.h>
#include "iostream.h"

//Prototype Fungsi
float total(int hrg,int jml);

void garis()
{
   cout<<"============================================"<<endl;
}

void judul()
{
   garis();
   cout<<"PROGRAM TOKO ABC"<<endl;
	garis();
}

void main()
{
   char nama[20],barang[20];
   int harga,jumbel;

   judul();
   cout<<"Masukkan Nama Pembeli : ";cin>>nama;
   cout<<"Nama Barang           : ";cin>>barang;
   cout<<"Harga                 : ";cin>>harga;
   cout<<"Jumlah Beli           : ";cin>>jumbel;
   garis();
   cout<<"Terima kasih "<<nama<<" telah berbelanja di toko kami."<<endl;
   cout<<"Barang yang anda beli adalah "<<barang<<" dengan harga "<<harga<<endl;
   cout<<"Jumlah yang anda beli adalah "<<jumbel<<" sehingga total bayar adalah ";
   cout<<total(harga,jumbel);
   getch();
}

float total(int hrg,int jml)
{
   return hrg * jml;
}
