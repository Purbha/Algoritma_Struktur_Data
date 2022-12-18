#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main() {
	/*
   	Sumber: http://www.cplusplus.com/doc/tutorial/pointers/
   	Suatu variable adalah lokasi di memori komputer yang dapat diakses
      	oleh pengenal mereka (nama variable tersebut). Dengan cara ini
         program tidak perlu peduli dengan alamat fisik data didalam memori.
      Program hanya perlu menggunakan pengenal (nama variable) setiap kali
      	merujuk kedalam suatu variable.
   */
	int nilai1,nilai2,*nilai3;
   nilai1 = 5;
   cout<<"Nilai 1 adalah "<<nilai1<<endl;
   nilai2 = nilai1;
   cout<<"Nilai 2 adalah "<<nilai2<<endl;
	/*
   	Variable nilai3 adalah variable yang bertipe pointer.
   	Nilai variable nilai3 harus berupa alamat suatu memori.
   	Variable nilai3 adalah berisi alamat memori variable nilai1.
   */
	nilai3 = &nilai1;
   cout<<"Nilai 3 adalah "<<nilai3;
	getch();
}