#include <iostream.h>
#include <conio.h>
#include <stdio.h>
/*
	Fungsi-fungsi pustaka yang umum digunakan untuk menampilkan hasil yang
   prototype-nya berada di file judul conio.h
   1. getch()
   	Fungsi getch() (get character and echo) dipakai untuk membaca
      sebuah karakter dan karakter yang dimasukan tidak akan
      ditampilkan di layar.
   2. getche()
   	Fungsi getche() dipakai untuk membaca sebuah karakter dan karakter
      yang dimasukan ditampilkan di layar.
   3. clrscr()
   	Fungsi ini digunkan untuk membersihkan layar window dan
      memindahkan posisi kursor ke baris 1 kolom 1 (pojok kiri atas).
   4. clreol()
   	Fungsi ini digunakan untuk membersihkan layar mulai dari posisi
      kursor hingga kolom terakhir, posisi kursor tiak berubah.
   5. gotoxy()
   	Fungsi gotoxy digunakan untuk memindahkan kursor ke kolom x, baris y.
*/
void main()
{
   const float phi = 3.14;
   int jari = 7;
   float luas;
	printf("Nilai dari jari-jari adalah %d \n",jari);
   luas = jari * jari * phi;
   printf("Luas lingkaran adalah %.2f",luas);
	getch();
}