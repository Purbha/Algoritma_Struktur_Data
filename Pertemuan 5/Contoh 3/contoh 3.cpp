#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void main()
{
   char nama[20],tipe[20],souvenir[20];
   char kode,lagi;
   int lama;
   float harga,total,admin=200000,ubay,ukem;

awal:

	clrscr();
	puts("PENGINAPAN PASTI BETAH");
   puts("*******************************");
   cout<<"Nama Penyewa      : ";cin>>nama;
   cout<<"Kode Kamar [A/B/M]: ";cin>>kode;

   if (kode == 'A' || kode == 'a')
   {
    	strcpy(tipe,"Anggrek");
      harga = 300000;
   }
   else if (kode == 'B' || kode == 'b')
   {
    	strcpy(tipe,"Bougenville");
      harga = 250000;
   }
   else if (kode == 'M' || kode == 'm')
   {
    	strcpy(tipe,"Mawar");
      harga = 200000;
   }
   else
	{
      puts("*******************************");
      cout<<"Kode kamar yang anda masukan salah, ingin input lagi?";
      cin>>lagi;
      switch(lagi)
      {
      	case 'Y':
         case 'y':
         	goto awal;
      	default:
         	goto akhir;
      }
   }


   clrscr();
   puts("PENGINAPAN PASTI BETAH");
   puts("*******************************");
   cout<<"Nama Penyewa      : "<<nama<<endl;
   cout<<"Kode Kamar [A/B/M]: "<<kode<<endl;
   cout<<"Lama Menginap     : ";cin>>lama;
   puts("*******************************");

   if (lama>=7)
	{
    	strcpy(souvenir,"Payung Cantik");
   }
   else
	{
    	strcpy(souvenir,"Tidak Dapat");
   }

   total = (harga * lama) + admin;

   cout<<"Tipe Kamar \t\t: "<<tipe<<endl;
   cout<<"Lama Menginap \t\t: "<<lama<<" hari"<<endl;
   cout<<"Souvenir \t\t: "<<souvenir<<endl;
   printf("Biaya Sewa \t\t: Rp.%8.2f \n",harga);
   printf("Biaya Administrasi \t: Rp.%8.2f \n",admin);
   printf("Total Biaya Sewa \t: Rp.%11.2f \n",total);
   puts("*******************************");
   cout<<"Uang Bayar   : ";cin>>ubay;
   ukem = ubay - total;
   cout<<"Uang kembali : "<<ukem<<endl;
   cout<<"ingin input lagi [Y/T] ";cin>>lagi;

   switch(lagi)
   {
   	case 'Y':
      case 'y':
       	goto awal;
     	default:
        	goto akhir;
   }

akhir:
	getch();
}

