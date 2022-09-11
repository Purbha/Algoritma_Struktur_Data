#include <stdio.h>
#include "conio.h"
#include <iostream.h>
#include "string.h"

void judul();
void garis();
void ket(char ukuran);
long harga(char ukuran);

long total(int jumbel, long hrg)
{
	return jumbel * hrg;
}

void main()
{
	char ukuran, nama[20];
	int jumbel;
	float hrg;

   judul();
   puts ("Ukuran Jaket");
	puts ("S = Small");
	puts ("M = Medium");
	puts ("L = Larga");
   garis();
   cout <<"Masukkan Nama Pembeli = ";cin>>nama;
	cout <<"Masukkan Ukuran Jaket = ";cin>>ukuran;
	cout <<"Jumlah Beli           = ";cin>>jumbel;
   garis();

   hrg = harga(ukuran);

   cout<<"Terima kasih telah berbelanja di toko kami."<<endl;
   cout<<"Nama Pembeli\t= "<<nama<<endl;
	cout<<"Ukuran\t\t= "<<ukuran<<endl;
	cout<<"Keterangan\t= ";ket(ukuran);cout<<endl;
   cout<<"Harga\t\t= "<<hrg<<endl;
	cout <<"Jumlah\t\t= "<<jumbel<<endl;
  	cout <<"Total\t\t= "<<total(jumbel,hrg)<<endl;
	getch();
}

void garis()
{
	cout<<"\n============================================\n";

}

void judul()
{
   garis();
	puts ("\t\tTOKO JAKET PASTI PAS");
   garis();
}

void ket(char ukuran)
{
	if (ukuran == 's' || ukuran == 'S') { cout<<"Small"; }
   else if (ukuran == 'm' || ukuran == 'M') { cout<<"Medium"; }
   else { cout<<"Large"; }
}

long harga(char ukuran)
{
	if (ukuran == 's' || ukuran == 'S') { return 100000; }
   else if (ukuran == 'm' || ukuran == 'M') { return 125000; }
   else { return 150000; }
}
