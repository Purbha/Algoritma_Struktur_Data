/*                                 
 Contoh Pemanggilan Fungsi By Value
*/
#include "stdio.h"
#include "iostream.h"
#include "conio.h"

void tambah(int m, int n);
void garis();

void main()
{
	int a,b;
   a = 5; b = 9;
   cout<<"Nilai variable sebelum fungsi digunakan"<<endl;
   cout<<"Nilai a adalah "<<a<<" dan nilai b adalah "<<b<<endl;
   garis();

   //Pemanggilan Fungsi Tambah
   tambah(a,b);

   garis();
   cout<<"Nilai variable setelah fungsi digunakan"<<endl;
   cout<<"Nilai a adalah "<<a<<" dan nilai b adalah "<<b<<endl;

   getch();
}

void tambah(int m, int n)
{
	m+=5; n+=7;
   cout<<"Nilai didalam fungsi tambah."<<endl;
   cout<<"Nilai m adalah "<<m<<" dan nilai n adalah "<<n<<endl;
}

void garis()
{
   cout<<"\n\n===================================================\n\n";
}
