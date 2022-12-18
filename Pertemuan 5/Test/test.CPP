 #include <stdio.h>
 #include <iostream.h>
 #include <conio.h>

 //Nama  : Muhammad Ridwan
 //NIM   : 1620210008
 //Prodi : Matematika

 void main  ()
 {
 	char nama[50], tipe[50], souvenir[50];
   char kode, lagi;
   int lama;
   float harga, total, admin=200000, ubay, ukem;

 awal:

 	clrscr();
   puts("VILLA SELALU ADA");
   puts("~~~~~~~~~~~~~~~~~~~~~~~~");
   cout<<"Nama Penyewa      : ";cin>>nama;
   cout<<"Kode Kamar [A/B/C]: ";cin>>kode;

   if (kode == 'A' || 'a')
   {
   	strcpy (tipe,"Cinta");
      harga = 350000;
   }
   else if (kode == 'B' || 'b')
   {
   	strcpy (tipe,"Setia");
      harga = 300000;
   }
   else if (kode == 'C' || 'c')
   {
   	strcpy (tipe,"Nyaman");
      harga = 250000;
   }
   else
   {
   	puts("~~~~~~~~~~~~~~~~~~~~~~~~");
      cout<<"Kode Yang Anda Masukan Salah, Ingin Input Data Lagi?";cin>>lagi;
      switch(lagi)
      {
      	case 'Y':
         case 'y':
         	goto awal;
         default:
         	goto akhir;
      }
   }
   cout<<tipe<<endl;
   /*
   clrscr();
   puts("VILLA SELALU ADA");
   puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   cout<<"Nama Penyewa       : "<<nama<<endl;
   cout<<"Kode Kamar [A/B/C] : "<<kode<<endl;
   cout<<"Lama Menginap      : ";cin>>lama;
   puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	if (lama>=7)
   {
   	strcpy(souvenir,"Payung VILLA SELALU ADA");
   }
   else
   {
   	strcpy(souvenir,"Tidak Dapat");
   }

   total = (harga * lama) + admin;

   cout<<"Tipe Kamar \t\t: "<<tipe<<endl;
   cout<<"Lama Menginap \t\t: "<<lama<<" hari"<<endl;
   cout<<"Souvenir \t\t: " <<souvenir<<endl;
   printf("Biaya Sewa \t\t: Rp.%8.2f \n",harga);
   printf("Biaya Administrasi \t: Rp.%8.2f \n",admin);
   printf("Total Biaya Sewa \t: Rp.%8.2f \n",total);
   puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   cout<<"Uang Bayar    : ";cin>>ubay;
   ukem = ubay - total;
   cout<<"Uang Kembali  : "<<ukem<<endl;
   cout<<"Ingin Input lagi [Y/T] ";cin>>lagi;
   	switch(lagi)
      {
      	case 'Y':
         case 'y':
         	goto awal;
         default:
         	goto akhir;
      }
   */
 akhir:
	getch();
 }