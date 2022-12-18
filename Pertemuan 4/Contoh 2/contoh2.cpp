#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream.h>

void main()
{
   int pilih;
   char huruf[20];

   printf("Silakan pilih program [1/2]: ");cin>>pilih;
   //scanf("%d",&pilih);
   /*
   	There are two problems with using scanf() to get a number:
      First, validation/error handling is poor.
      The second problem is that of leaving characters in the buffer.
      Sumber: http://faq.cprogramming.com/cgi-bin/smartfaq.cgi?answer=1043372399&id=1043284385
   */
   if (pilih == 1)
   {
		clrscr();
   	puts("===================================");
		puts("\tContoh Program Strlen");
   	puts("===================================");
		cout<<"Masukkan Sembarang Kata = ";gets(huruf);
		cout<<"Panjang Kata Yang Diinputkan = "<<strlen(huruf);
		getch();
   }
   else if (pilih == 2)
   {
   	clrscr();
   	puts("===================================");
		puts("\tContoh Program Strcmp");
   	puts("===================================");
   	char a1[] = "S";
		char a2[] = "s";
		char b1[] = "S";
		cout<<"Hasil Perbandingan "<<a1<<" dan "<<a2<<"->";
		cout<<strcmp(a1,a2)<<endl;
		cout<<"Hasil Perbandingan "<<a2<<" dan "<<a1<<"->";
		cout<<strcmp(a2,a1)<<endl;
		cout<<"Hasil Perbandingan "<<a1<<" dan "<<b1<<"->";
		cout<<strcmp(a1,b1) <<endl;
		getch();
	}
   else
   {
   	printf("Maaf pilihan anda salah..");
      getch();
   }

}
