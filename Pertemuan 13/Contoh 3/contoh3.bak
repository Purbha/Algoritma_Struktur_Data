//Contoh Class
#include <iostream.h>
#include "stdio.h"
#include <conio.h>

class bujursangkar
{
	int panjang,lebar;
 	public:
   	//Ini adalah prototipe konstruktor
      bujursangkar (int pjg, int lbr);
   	int luas()
      {
      	return panjang * lebar;
      }
};

//Ini adalah bentuk lengkap konstruktor
//Nama konstruktor harus sama dengan nama kelas
bujursangkar::bujursangkar(int pjg, int lbr)
{
	panjang = pjg;
  	lebar = lbr;
}

void main()
{
   int pjg = 3;
   int lbr = 4;
   cout<<"Panjang bujur sangkar adalah : "<<pjg<<endl;
   cout<<"Lebar bujur sangkar adalah   : "<<lbr<<endl;
   cout<<"=============================================\n";

   //Pemberian nilai Konstruktor dilakukan secara langsung
	bujursangkar bs (pjg,lbr);

  	cout<<"Luas bujur sangkar adalah    : "<<bs.luas();
	getch();
}