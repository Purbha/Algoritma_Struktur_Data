#include <conio.h>
#include <stdio.h>
#include <iostream.h>

void main()
{
	long pendapatan,jasa,komisi,total;

	printf("Pendapatan hari ini Rp. ");cin>>pendapatan;

   if (pendapatan <= 200000)
   {
      //Model perhitungan integer
   	jasa = 10000; komisi = (10*pendapatan)/100;
   }
   else if(pendapatan <= 500000)
   {
      //Model perhitungan integer
   	jasa = 20000; komisi = (15*pendapatan)/100;
   }
   else
   {
      //Model perhitungan integer
   	jasa = 30000; komisi = (20*pendapatan)/100;
   }

   /*Proses Perhitungan*/
   total = pendapatan+jasa+komisi;

   printf("Uang jasa Rp. %d\n",jasa);
   printf("Uang komisi Rp. %d\n",komisi);
   puts("===========================================");
   printf("Hasil total adalah Rp. %d",total);

	getch();
}
