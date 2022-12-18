//Contoh Class
#include <iostream.h>
#include "stdio.h"
#include <conio.h>

class bujursangkar
{
	int panjang,lebar;
 	public:
   	void set_nilai(int x,int y);
   	int luas()
      {
      	return panjang * lebar;
      }
};

void bujursangkar::set_nilai(int x, int y)
{
	//variable panjang adalah variable di dalam class bujursangkar
	panjang = x;
   //variable lebar adalah variable di dalam class bujursangkar
  	lebar = y;
}

void main()
{
   int pjg = 3;
   int lbr = 4;
	bujursangkar bs;
  	bs.set_nilai(pjg,lbr);
   cout<<"Panjang bujur sangkar adalah : "<<pjg<<endl;
   cout<<"Lebar bujur sangkar adalah   : "<<lbr<<endl;
   cout<<"=============================================\n";
  	cout<<"Luas bujur sangkar adalah    : "<<bs.luas();
	getch();
}
