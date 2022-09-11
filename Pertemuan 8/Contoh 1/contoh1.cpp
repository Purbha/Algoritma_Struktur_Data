#include <stdio.h>
#include "iostream.h"
#include <conio.h>
#include "iomanip.h"

void judul();

void main() {
   int i,jml;
   judul();
   printf("Masukan jumlah data: ");cin>>jml;
   cout<<endl;
   char nama[5][20];
  	int absen[5],quis[5],uts[5],uas[5];
   double total[5];
   for(i=1;i<=jml;i++) {
   	printf("Data ke %d\n",i);
      printf("Nama siswa : ");gets(nama[i]);
      printf("Nilai absen: ");cin>>absen[i];
      printf("Nilai quis : ");cin>>quis[i];
      printf("Nilai uts  : ");cin>>uts[i];
      printf("Nilai uas  : ");cin>>uas[i];
      total[i]=(absen[i]*0.1)+(quis[i]*0.2)+(uts[i]*0.3)+(uas[i]*0.4);
      cout<<endl;
   }

   clrscr();
   cout<<"==============================================="<<endl;
   cout<<"No Nama Siswa   Absen  Quis  UTS  UAS  Total"<<endl;
   cout<<"==============================================="<<endl;
   for(i=1;i<=jml;i++) {
      cout<<setw(3)<<setiosflags(ios::left)<<i;
      cout<<setw(13)<<nama[i];
      cout<<setw(7)<<absen[i];
      cout<<setw(6)<<quis[i];
      cout<<setw(5)<<uts[i];
      cout<<setw(5)<<uas[i];
		printf("%.2f",total[i]);
   	cout<<endl;
   }
   cout<<"==============================================="<<endl;
   getch();
}

void judul() {
	puts("==========================================");
   puts("\tContoh Program Array");
   puts("==========================================");
}