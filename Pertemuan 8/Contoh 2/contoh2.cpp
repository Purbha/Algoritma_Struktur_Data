#include <stdio.h>
#include <conio.h>
#include "iomanip.h"
#include "iostream.h"

void main()
{
   puts("=============================");
	puts("   Gerobak Fried Chicken");
   puts("=============================");
   puts("   Kode   Jenis    Harga");
   puts("=============================");
   puts("   D      Dada     12000");
   puts("   P      Paha     8500");
   puts("   S      Sayap    10000");
   puts("=============================");

   char nama[20];
   int i,jml;

   printf("Masukan nama pembeli: ");cin>>nama;
   printf("Masukan jumlah beli : ");cin>>jml;

	char kode;
	char jenis[5][20];
   int jumlah[5],harga[5];
   float total[5];
   float tobay=0,pajak,grand;

   for(i=1;i<=jml;i++)
   {

   	printf("\n");
      printf("Data ke               : %d\n",i);
      printf("Masukan kode [D][P][S]: ");cin>>kode;
      printf("Jumlah beli           : ");cin>>jumlah[i];

      switch(kode)
      {
         case 'D':
         case 'd':
            harga[i] = 12000;
  				strcpy(jenis[i],"Dada");
         	break;
         case 'P':
         case 'p':
            harga[i] = 8500;
  				strcpy(jenis[i],"Paha");
         	break;
      	default:
         	harga[i] = 10000;
  				strcpy(jenis[i],"Sayap");
         	break;
      }

      //Hitung Total
      total[i] = jumlah[i]*harga[i];
      tobay = tobay + total[i];

   }

	clrscr();
   puts("================================");
	puts("   Gerobak Fried Chicken");
   puts("================================");
	puts("No  Jenis  Harga  Jml  Total");
   puts("================================");

	for(i=1;i<=jml;i++)
   {
      cout<<setw(4)<<setiosflags(ios::left)<<i;
      cout<<setw(7)<<jenis[i];
      cout<<setw(7)<<harga[i];
      cout<<setw(5)<<jumlah[i];
		cout<<total[i]<<endl;
   }

   //Hitung Pajak
   pajak = 0.1 * tobay;

   //Hitung Grand
   grand = tobay + pajak;

   puts("================================");
 	printf("\tTotal Bayar: %.0f\n",tobay);
 	printf("\tPajak      : %.0f\n",pajak);
 	printf("\tGrand Total: %.0f",grand);

	getch();
}
