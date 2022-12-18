#include "stdio.h"
#include <conio.h>
#include "iostream.h"
#include <iomanip.h>

float total(int jumbel, float harga) {
	return jumbel * harga;
}

void garis() {
	cout<<"=================================================\n";
}

void judul() {
	cout<<"\tSupermarket Superstar"<<endl; garis();
}

//Deklarasi Struct jangan lupa diakhiti titik koma.
struct data {
	char kode;
   char nama[20];
   int jml;
   float hrg;
};

char hurufbesar(char huruf) {
   int kodeascii = (int) huruf;
 	if (kodeascii>=97 && kodeascii<=122) {
   	kodeascii = kodeascii - 32;
   }
   return (char) kodeascii;
}

void main() {
	int i,n;
	data market[10];
  	float subtotal[10];
   long tobay=0;

depan:
	clrscr();
   judul();
	cout<<"Selamat datang ditoko kami."<<endl;
   cout<<"Ketentuan Belanja"<<endl;
   puts("1. Jika kode A maka Nama Barang adalah Baju\n");
   puts("2. Jika kode B maka Nama Barang adalah Celana\n");
   puts("3. Jika kode C maka Nama Barang adalah Sepatu\n");
   puts("4. Jika input kode salah maka muncul pesan salah kode\n");
	cout<<"Masukan Jumlah Data: ";cin>>n;

   clrscr();
   judul();
   cout<<"Data Ke - "<<endl;
   cout<<"Kode [A/B/C]: "<<endl;
  	cout<<"Jumlah Beli : "<<endl;

	for(i=1;i<=n;i++) {
		gotoxy(11,3);clreol();
		gotoxy(15,4);clreol();
		gotoxy(15,5);clreol();
      gotoxy(11,3);cout<<i;
      gotoxy(15,4);cin>>market[i].kode;
		gotoxy(15,5);cin>>market[i].jml;

		if(market[i].kode == 'A' || market[i].kode == 'a') {
   		strcpy(market[i].nama,"Baju");
        	market[i].hrg=20000;
      } else if(market[i].kode == 'B' || market[i].kode == 'b') {
      	strcpy(market[i].nama,"Celana");
        	market[i].hrg=30000;
      } else if(market[i].kode == 'C' || market[i].kode == 'c') {
      	strcpy(market[i].nama,"Sepatu");
        	market[i].hrg=40000;
      } else {
      	goto salah;
      }
      subtotal[i] = total(market[i].jml, market[i].hrg);
   	tobay = tobay + subtotal[i];
   }

	clrscr();
   judul();
   cout<<"No Kode Nama Barang  Harga   Jumlah Subtotal"<<endl;
   garis();
   for(i=1;i<=n;i++) {
   	cout<<setiosflags(ios::left)<<setw(3)<<i;
   	cout<<setw(5)<<hurufbesar(market[i].kode);
   	cout<<setw(13)<<market[i].nama;
   	cout<<setw(8)<<market[i].hrg;
   	cout<<setw(7)<<market[i].jml;
   	cout<<subtotal[i]<<endl;
	}
  	garis();
   long ubay, ukem;
	cout<<"\t\tTotal Bayar : "<<tobay<<endl;
	cout<<"\t\tUang Bayar  : ";cin>>ubay;
   ukem = ubay - tobay;
	cout<<"\t\tUang Kembali: "<<ukem<<endl;
   goto belakang;

salah:
	cout<<"Input kode salah..!!"<<endl;
   goto belakang;

belakang:
	char lagi;
   cout<<"Ingin input data lagi [Y/T]: ";cin>>lagi;
   if (lagi == 'y' || lagi == 'Y') { goto depan; }
	getch();
}

