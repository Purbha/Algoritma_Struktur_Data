#include "stdio.h"
#include <iostream.h>
#include "conio.h"

void garis()
{
	cout<<"========================================\n";
}

/*
	Kelas merupakan konsep perluasan dari struct.
	Seperti struct, class dapat berisi anggota data.
   Kelebihan dari class adalah class juga dapat mengandung fungsi sebagai anggota.
*/

void judul()
{
   garis();
   cout<<"Program Nilai Siswa"<<endl;
   garis();
}

class siswa
{
	//Penggunaan Public Pada Class
	public:
	  	char nis[9],nama[20];
   	float nilai;
};

void main()
{
	/*
   	Sebuah objek adalah Instansiasi kelas.
      Dalam hal ini "siswa" akan menjadi tipe data, dan "sekolah" akan menjadi variabel.
   */
   siswa sekolah;
   judul();
   cout<<"Nomor Induk Siswa : ";cin>>sekolah.nis;
   cout<<"Input Nama Siswa  : ";cin>>sekolah.nama;
	cout<<"Input Nilai Akhir : ";cin>>sekolah.nilai;
   clrscr();
   cout<<"Data yang anda input adalah"<<endl;
   garis();
   cout<<"Nomor Induk Siswa: "<<sekolah.nis<<endl;
   cout<<"Nama Siswa       : "<<sekolah.nama<<endl;
   cout<<"Nilai Akhir      : "<<sekolah.nilai;
	getch();
}
