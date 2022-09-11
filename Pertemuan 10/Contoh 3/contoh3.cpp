#include "stdio.h"
#include <iomanip.h>
#include "tampilan.h"
#include <conio.h>
#include "iostream.h"

/*
	Dalam penulisan #include ada dua bentuk penulisan :
   #include "nama_file_header" atau #include <nama_file_header>
*/

void main()
{
	int i,n;

   tulis("================================");
   tulis("\tINFORMATIKA JAKARTA");
   tulis("================================");
   tulis("Data Jurusan");
   tulis("  A => Manajemen Informatika");
   tulis("  B => Teknik Komputer");
   tulis("  C => Komputer Akuntansi");
   tulis("================================");
   cetak<<"Input Banyaknya Data: ";input>>n;

   char kd[5],nm[5][15],jrs[5][30];
   float daftar[5];
   float total=0;

	for(i=1;i<=n;i++)
	{
      cetak<<endl;
      cetak<<"Data Ke - "<<i<<endl;
      tampil("Masukan Nama : ");ambil(nm[i]);
      tampil("Kode Jurusan : ");input>>kd[i];

		jika(kd[i]=='A'||kd[i]=='a')
	   {
   		strcpy(jrs[i],"Manajemen Informatika");
			daftar[i] = 1500000;
	   }
		selain jika(kd[i]=='B'||kd[i]=='b')
   	{
   		strcpy(jrs[i],"Teknik Komputer");
         daftar[i] = 1250000;
      }
      selain
      {
      	strcpy(jrs[i],"Komputer Akuntansi");
         daftar[i] = 1000000;
		}
      total = total + daftar[i];
   }

	/*
	#include "nama_file_header"
   Pertama kali compiler akan mencari file header yang disebutkan pada directori
	yang sedang aktif dan apa bila tidak ditemukan akan mencari pada directori
	dimana file header berada.
   */
	clrscr();
	tulis("\t\tData Calon Mahasiswa");
	cetak<<"================================================="<<endl;
	tulis("No  Nama       Jurusan                 Daftar");
   cetak<<"================================================="<<endl;
   for(i=1;i<=n;i++)
	{
   	cetak<<setw(4)<<setiosflags(ios::left)<<i;
      cetak<<setw(11)<<nm[i];
      cetak<<setw(24)<<jrs[i];
		cetak<<setprecision(8)<<daftar[i];
      cetak<<endl;
   }
   cetak<<"================================================="<<endl;
   cetak<<setw(39)<<"Total Bayar";
   cetak<<total;
	getch();
   /*
   #include <nama_file_header>
	Compiler hanya akan mencari file header yang disebutkan pada directori
	dimana file header berada.
	*/
}

