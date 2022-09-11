//Contoh Class
#include <iostream.h>
#include "stdio.h"
#include <conio.h>

class bujursangkar
{
   private:
		int panjang,lebar;
 	public:
   	void set_nilai(int x,int y);
   	int luas();
};

void bujursangkar::set_nilai(int x, int y)
{
	panjang = x;
  	lebar = y;
}

int bujursangkar::luas()
{
	return panjang * lebar;
}

void garis()
{
   cout<<"=============================================\n";
}

void main()
{
	int p1,p2,l1,l2;
   //Create Object
	bujursangkar bs1;
	bujursangkar bs2;
   cout<<"Bujur Sangkar 1"<<endl;
   garis();
   cout<<"Panjang : ";cin>>p1;
   cout<<"Lebar   : ";cin>>l1;
  	bs1.set_nilai(p1,l1);
  	cout<<"Luas    : "<<bs1.luas();
   cout<<endl<<endl;
   cout<<"Bujur Sangkar 2"<<endl;
   garis();
   cout<<"Panjang : ";cin>>p2;
   cout<<"Lebar   : ";cin>>l2;
  	bs2.set_nilai(p2,l2);
  	cout<<"Luas    : "<<bs2.luas();
	getch();
}