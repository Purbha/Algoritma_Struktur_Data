#include <stdio.h>
#include <iostream.h>
#include <conio.h>

void main() {
	int nilai1,nilai2;
   //Variable pointerku bertipe pointer
	int *pointerku;
  //Variable pointerku diisi alamat dari variable nilai1
	pointerku = &nilai1;
   /*
   	Alamat memori variable yang ditunjuk variable pointerku diisi nilai 10.
      Alamat ini ternyata adalah alamatnya variable nilai1.
      Maka variable nilai1 jadi bernilai 10.
   */
  	*pointerku = 10;
	pointerku = &nilai2;
  	*pointerku = 20;
  	cout << "Nilai 1 adalah " << nilai1 << endl;
  	cout << "Nilai 2 adalah " << nilai2 << endl;
  	getch();

}

