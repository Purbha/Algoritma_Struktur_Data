#include <stdio.h>
#include <conio.h>
#include <iostream.h>
void main()
{
	char kode,ukuran,merk[15]="None";
   long harga=0;
	cout<<"Kode Baju [1/2] : ";cin>>kode;
   cout<<"Ukuran [S/M]    : ";cin>>ukuran;
	if (kode=='1')
   {
   	strcpy(merk,"H & R");
   	if (ukuran=='S' || ukuran =='s') { harga=45000; } else { harga=60000; }
   }
  	else if (kode=='2')
   {
   	strcpy(merk," Adidas");
      //Bentuk penulisan if versi singkat
   	if (ukuran=='S' || ukuran == 's') harga=65000; else harga=75000;
   }
   else
   {
   	cout<<"Salah Kode Baju"<<endl;
   }
   cout<<"Merk Baju : "<<merk<<endl;
   cout<<"Harga Baju : "<<harga<<endl;
   getch();
}
