/* Program Membuat Garis Menggunakan Fungsi */
#include "stdio.h";
#include "iostream.h";
#include "conio.h";

void garis() {
	printf("\n----------------------------------------\n");
}

/*Program Utama*/
void main() {
	garis(); //Memanggil fungsi garis
   cout<<"Belajar Algoritma Dan Struktur Data.";
	garis(); //Memanggil fungsi garis
   int a[5];
 	a[0]=20; a[1]=35; a[2]=55; a[3]=25;
	printf("Nilai A = %d\n",a[0]);
	printf("Nilai B = %d\n",a[1]);
	printf("Nilai C = %d\n",a[2]);
	printf("Nilai D = %d\n",a[3]);
   getch();
}