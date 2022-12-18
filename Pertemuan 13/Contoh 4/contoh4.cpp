#include <stdio.h>
#include "iostream.h"
#include <conio.h>

class motor {
	private:
   	char merk[20];
      float cc_mesin;
      long harga;
   public:
      //Konstruktor
   	motor(char nama[20], float cc, long hrg);
      //Destruktor
      //https://www.tutorialspoint.com/cplusplus/cpp_constructor_destructor.htm
      ~motor();
      //Fungsi
      void keterangan();
};

/*
The Class Destructor
A destructor is a special member function of a class that is executed whenever
 an object of it's class goes out of scope or whenever the delete expression
 is applied to a pointer to the object of that class.

A destructor will have exact same name as the class prefixed with a tilde (~)
 and it can neither return a value nor can it take any parameters. Destructor
 can be very useful for releasing resources before coming out of the program like closing files, releasing memories etc.
*/
motor::~motor() {
   delete[] merk;
}

motor::motor(char nama[20], float cc, long hrg) {
	strcpy(merk,nama);
   cc_mesin = cc;
   harga = hrg;
}

void garis() {
	cout<<"========================================\n";
}

void motor::keterangan() {
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
