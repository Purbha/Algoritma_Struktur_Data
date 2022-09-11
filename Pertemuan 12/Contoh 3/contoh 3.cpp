#include <stdio.h>
#include "iostream.h"
#include <conio.h>
#include "iomanip.h"

#define cetak cout
#define masuk cin
#define enter endl

void garis()
{
	cetak<<"=====================================================\n";
}

void judul()
{
	cetak<<"\t\tPENITIPAN HEWAN PELIHARAAN"<<enter;
   cetak<<"\t\t";putchar(34);cetak<<"MEAOW PET CARE";putchar(34);cetak<<enter;
   garis();
}

float tobay(float total, float subtotal);

void main()
{
	char nm_pet[20];
   char nm_pem[20];
   int i,jml;

awal:
	clrscr();
   judul();
   cout<<"Nama Petugas : ";cin>>nm_pet;
   cout<<"Nama Pemilik : ";cin>>nm_pem;
   cout<<"Jumlah Hewan : ";cin>>jml;
   clrscr();
   judul();
   puts("Data Ke - ");
   puts("Kode Jenis Hewan [K/H]  : ");
   puts("Kode Perawatan [1/2]    : ");
	puts("Jumlah Hewan            : ");

   struct
   {
   	char kd_hewan;
   	char kd_rawat;
      int jml_hewan;
   }masukan[5];

   char jenis[5][10],rawat[5][10];
   float harga[5], subtotal[5];
   float total=0;

   for (i=1;i<=jml;i++)
   {
      gotoxy(27,5);clreol();
      gotoxy(27,6);clreol();
      gotoxy(27,7);clreol();
   	gotoxy(11,4);cout<<i;
   	gotoxy(27,5);cin>>masukan[i].kd_hewan;
   	gotoxy(27,6);cin>>masukan[i].kd_rawat;
   	gotoxy(27,7);cin>>masukan[i].jml_hewan;

      if (masukan[i].kd_hewan == 'K' || masukan[i].kd_hewan == 'k')
      {
      	strcpy(jenis[i],"Kucing");
         if (masukan[i].kd_rawat == '1')
         { harga[i]=250000; strcpy(rawat[i],"Lux"); }
         else
         { harga[i]=300000; strcpy(rawat[i],"Intensive"); }
      }
      else
      {
      	strcpy(jenis[i],"Hamster");
         if (masukan[i].kd_rawat == '1')
         { harga[i]=150000; strcpy(rawat[i],"Lux"); }
         else
         { harga[i]=100000; strcpy(rawat[i],"Intensive"); }
      }

      //Hitung Subtotal
      subtotal[i] = masukan[i].jml_hewan * harga[i];

      //Hitung Total
      total = tobay(total,subtotal[i]);

   }

   clrscr();
   judul();
   printf("Nama Petugas: %s\n",nm_pet);
   printf("Nama Pemilik: %s\n",nm_pem);
   garis();
   cout<<"No Jenis    Jenis       Biaya      Jumlah  Subtotal"<<endl;
   cout<<"   Hewan    Perawatan   Perawatan  Hewan"<<endl;
   garis();
   for (i=1;i<=jml;i++)
   {
   	cout<<setw(3)<<setiosflags(ios::left)<<i;
      cout<<setw(9)<<jenis[i];
      cout<<setw(12)<<rawat[i];
      cout<<setw(11)<<harga[i];
      cout<<setw(8)<<masukan[i].jml_hewan;
      cout<<setprecision(10)<<subtotal[i];
      cout<<endl;
	}
   garis();
   float ubay,ukem;
   cout<<"\t\t\tTotal Bayar : "<<setprecision(10)<<total<<endl;
   cout<<"\t\t\tUang Bayar  : ";cin>>ubay;
   ukem = ubay - total;
   cout<<"\t\t\tUang Kembali: "<<setprecision(10)<<ukem<<endl;
   goto akhir;

akhir:
	char lagi;
   cout<<"\t\tINPUT DATA LAGI [Y/N]: ";cin>>lagi;
   if (lagi == 'Y' || lagi == 'y') { goto awal; } else { getch(); }
}

float tobay(float total, float subtotal)
{
	return total + subtotal;
}
