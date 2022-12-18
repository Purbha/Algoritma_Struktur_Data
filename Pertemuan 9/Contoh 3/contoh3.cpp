#include <stdio.h>
#include <iostream.h>
#include <conio.h>

void main() {
	/*
   	1. Ketika suatu variable di deklarasikan, memori yang diperlukan untuk
      	menyimpan nilainya ditetapkan pada suatu lokasi tertentu didalam
         memori komputer pada suatu alamat.
      2. Secara umum program C++ tidak menentukan sendiri alamat memori dimana
      	nilai variable tersebut disimpan. Tugas ini diserahkan kepada OS
         (Operating System) untuk menentukan dilokasi mana (alamat) nilai
         dari varible tersebut disimpan. Hal ini dilakukan pada saat runtime
         (pada saat program dijalankan).
   */
	int nilai[5];
	int *p;
   nilai[0] = 5;
   nilai[1] = 10;
	cout << "Nilai [0] adalah " << nilai[0] << endl;
  	cout << "Nilai [1] adalah " << nilai[1] << endl;
   p = &nilai[0];
  	cout << "Alamat Nilai [0] adalah " << p << endl;
   p = &nilai[1];
  	cout << "Alamat Nilai [1] adalah " << p << endl;
  	getch();
}