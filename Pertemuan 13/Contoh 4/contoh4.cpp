#include <stdio.h>
#include "iostream.h"
#include <conio.h>

class motor
{
	private:
   	char merk[20];
      float cc_mesin;
      long harga;
   public:
      //Konstruktor
   	motor(char nama[20], float cc, long hrg);
      //Destruktor
      ~motor();
      //Fungsi
      void keterangan();
};

motor::~motor()
{
   delete[] merk;
}

motor::motor(char nama[20], float cc, long hrg)
{
	strcpy(merk,nama);
   cc_mesin = cc;
   harga = hrg;
}

void garis()
{
	cout<<"========================================\n";
}

void motor::keterangan()
{
	cout<<"Informasi Data Motor"<<endl;
	garis();
	cout<<"Merk motor adalah  : "<<merk<<endl;
	cout<<"CC mesin adalah    : "<<cc_mesin<<endl;
	cout<<"Harga motor adalah : "<<harga<<endl;
}


void main()
{
	motor balap("Ninja RR",150,35000000);
   balap.keterangan();
   cout<<endl<<endl;
	motor matik("Mio Soul",110,12500000);
   matik.keterangan();
	getch();
}
