#include <stdio.h>
#include "conio.h"
#include <iostream.h>

#define buka {
#define tutup }
#define cetak cout
#define masuk cin
#define tahan getch()

void main()
buka
   int a,i=5;
	int nilai[5];
	cetak<<"   Contoh Penggunaan #Define"<<endl;
	cout<<"==============================="<<endl;
   for(a=1;a<=i;a++)
   buka cetak<<"Masukan Nilai ke "<<a<<" -> ";masuk>>nilai[a]; tutup

   cout<<"\n\n\n";

	cetak<<"   Hasil Input"<<endl;
	cout<<"==============================="<<endl;
   for(a=1;a<=i;a++)
   { cetak<<"Nilai ke "<<a<<" adalah "<<nilai[a]<<endl; }

	tahan;
tutup
