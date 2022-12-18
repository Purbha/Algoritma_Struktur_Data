#include <stdio.h>
#include <conio.h>
#include <iostream.h>
void main()
{
	char kode,lagi;

//Deklarasi Label
atas:
	clrscr();
	cout<<"MASUKAN KODE BARANG [A/B/C]: ";
	kode = getche();
   //kode = getch();
	cout<<'\n';
	switch (kode) {
		case 'A': case 'a':
   		cout<<"Alat Olah Raga"; break;
		case 'B': case 'b':
   		cout<<"Alat Elektronik"; break;
   	case 'C': case 'c':
      	cout<<"Alat Masak"; break;
		default:
   		cout<<"Anda Salah Memasukan Kode";
   }
   cout<<'\n';
	cout<<"\nIngin Pilih Lagi [Y/T]: ";
	lagi = getche();
   //lagi = getch();
	if(lagi == 'Y' || lagi == 'y') goto atas;
	getch();
}
