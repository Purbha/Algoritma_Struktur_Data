#include "stdio.h"
#include <iostream.h>
#include "conio.h"
#define pi 3.14

void garis()
{
	cout<<"=====================================\n";
}

class tabung
{
	private:
   	int j,t;
      float v,k;
   public:
   	void masukan();
      void keluaran();
};

void tabung::masukan()
{
	cout<<"Program Menghitung Tabung"<<endl;
   garis();
   cout<<"Masukan Jari2  : ";cin>>j;
   cout<<"Masukan Tinggi : ";cin>>t;

   /*
   	Rumus menghitung volume tabung
      volume = ( phi x jar x jari ) x tinggi
   */
   v=(pi*j*j)*t;

   /*
   	Rumus menghitung keliling tabung
      keliling = ( 2 x ( phi x jari x 2 ) + t
   */
   k=(2*(pi*j*2))+t;
   garis();
}

void tabung::keluaran()
{
	cout<<"Volume dari tabung adalah  : ";printf("%8.2f\n",v);
	cout<<"Keliling dari tabung adalah: ";printf("%8.2f\n",k);

}

void main()
{
   //Create Object
   tabung tabung_obj;

   tabung_obj.masukan();
   tabung_obj.keluaran();

	getch();
}
