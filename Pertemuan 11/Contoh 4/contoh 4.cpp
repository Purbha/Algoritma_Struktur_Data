/*                                 
 Contoh Pemanggilan Fungsi By Reference
*/

#include "stdio.h"
#include "iostream.h"
#include "conio.h"

void tambah(int *m, int *n);
void garis();

void main()
{
	int a,b;
   a = 3; b = 5;
   cout<<"Nilai variable sebelum fungsi digunakan"<<endl;
   cout<<"Nilai a adalah "<<a<<" dan nilai b adalah "<<b<<endl;
   garis();

   /*
   Pemanggilan Fungsi Tambah
   Nilai yang masukan ke fungsi tambah bukan nilai dari variable a dan b
   tetapi alamat dari variable a dan b
   */
   tambah(&a,&b);

   garis();
   cout<<"Nilai variable setelah fungsi digunakan"<<endl;
   cout<<"Nilai a adalah "<<a<<" dan nilai b adalah "<<b<<endl;

   getch();
}

void tambah(int *m, int *n)
{
   /*
   	Nilai yang ada di alamat m ditambah 5
   	Hal ini akan merubah nilai variable a karena variable a ada di alamat m
   */
	*m= *m + 5;

   /*
   	Nilai yang ada di alamat n ditambah 7
   	Hal ini akan merubah nilai variable b karena variable b ada di alamat n
   */

   *n+=7;

   cout<<"Nilai didalam fungsi tambah."<<endl;
   cout<<"Nilai m adalah "<<m<<" dan nilai n adalah "<<n<<endl;
}

void garis()
{
   cout<<"\n\n===================================================\n\n";
}