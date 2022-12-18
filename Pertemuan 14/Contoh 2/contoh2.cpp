//Contoh Class Tingkat Advance
#include <iostream.h>
#include "stdio.h"
#include <conio.h>
#include "iomanip.h"

void garis();
void judul();
void jenis_kelamin (int kode);
void tipe_mobil(int kode);

class pelanggan
{
   public:
   	char nmpel[20];
      int jkpel;
      void set_pel(char nama[20], int kelamin);
};

void pelanggan::set_pel(char nama[20], int kelamin)
{
	strcpy(nmpel,nama);
   jkpel = kelamin;
}

struct data
{
   char merk[20];
   int sewa;
   long harga;
}mobil[10];

void main()
{
   char nama_pet[20],kd_penyewa[5];
   char kd_mobil[10];
   int i,jml;
	long subtotal[10], total=0;

	judul();
   puts("Nama Petugas : ");
   puts("Kode Penyewa : ");
   puts("Jumlah Data  : ");

   gotoxy(16,4);cin>>nama_pet;
   gotoxy(16,5);cin>>kd_penyewa;
   gotoxy(16,6);cin>>jml;

	/*Pembuatan Object Pelanggan*/
   pelanggan pel;

   if (strcmp(kd_penyewa,"PL001") == 0 || strcmp(kd_penyewa,"pl001") == 0)
   { pel.set_pel ("SAPTONO NUGROHO",1); strcpy(kd_penyewa,"PL001"); }
   else if (strcmp(kd_penyewa,"PL002") == 0 || strcmp(kd_penyewa,"pl002") == 0)
   { pel.set_pel ("NETI NURHAYATI",0); strcpy(kd_penyewa,"PL002"); }
   else if (strcmp(kd_penyewa,"PL003") == 0 || strcmp(kd_penyewa,"pl003") == 0)
   { pel.set_pel ("ARETA VORSTEN",1); strcpy(kd_penyewa,"PL003"); }

   clrscr();
   judul();
   puts("Data Ke - ");
   puts("Kode Mobil [M/D/S]");
   puts("Masukan Kode : ");
   puts("Jumlah Sewa  : ");

   for (i=1;i<=jml;i++)
   {
     	gotoxy(11,4);clreol();
     	gotoxy(16,6);clreol();
     	gotoxy(16,7);clreol();
 	  	gotoxy(11,4);cout<<i;
 	  	gotoxy(16,6);cin>>kd_mobil[i];
 	  	gotoxy(16,7);cin>>mobil[i].sewa;

   	if (kd_mobil[i] == 'M' || kd_mobil[i] == 'm')
     	{
      	strcpy(mobil[i].merk,"Mazda");
         mobil[i].harga = 300000;
     	}
      else if (kd_mobil[i] == 'D' || kd_mobil[i] == 'd')
     	{
      	strcpy(mobil[i].merk,"Daihatsu");
         mobil[i].harga = 350000;
     	}
      else if (kd_mobil[i] == 'S' || kd_mobil[i] == 's')
     	{
      	strcpy(mobil[i].merk,"Suzuki");
         mobil[i].harga = 400000;
     	}
      subtotal[i] = mobil[i].harga * mobil[i].sewa;
   	total = total + subtotal[i];
   }

   clrscr();
   cout<<"\tData Penyewaan Mobil Rental Otongmaro"<<endl;
   garis();
   cout<<"Nama Petugas: "<<setiosflags(ios::left)<<setw(20)<<nama_pet;
   cout<<"Kode Pelanggan : "<<kd_penyewa<<endl;
   cout<<"Jumlah Data : "<<setw(20)<<jml;
   cout<<"Nama Pelanggan : "<<pel.nmpel<<endl;
   cout<<setw(34)<<" "<<setw(20);
   cout<<"Jenis Kelamin  : "<<pel.jkpel<<endl;

   garis();
   puts("No Kode Merk Mobil   Jumlah Harga   Subtotal");
   garis();
   for (i=1;i<=jml;i++)
   {
   	cout<<setiosflags(ios::left)<<setw(3)<<i;
      cout<<setw(5)<<kd_mobil[i];
      cout<<setw(13)<<mobil[i].merk;
      cout<<setw(7)<<mobil[i].sewa;
      cout<<setw(8)<<mobil[i].harga;
      cout<<subtotal[i];
      cout<<endl;
   }

   garis();
   long ubay, ukem;
   cout<<"\t\tTotal Bayar : "<<total<<endl;
   cout<<"\t\tUang Bayar  : ";cin>>ubay;
   ukem = ubay - total;
   cout<<"\t\tUang Kembali: "<<ukem;
	getch();
}

void garis()
{
	puts("=======================================================");
}

void judul()
{
   garis();
	puts("\t\tRental Mobil Otongmaro");
	garis();
}

void jenis_kelamin(int kode)
{
	if (kode == 0) { cout<<"Wanita"; } else { cout<<"Pria"; }
}
