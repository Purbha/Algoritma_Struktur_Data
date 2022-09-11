/*---------------------------------------------------------------*/
/*Program: Scanf.cpp*/
/*---------------------------------------------------------------*/
#include <stdio.h>
#include <iostream.h>
#include <conio.h>

void main()
{
	int nilai,tugas;
   float total;
   /*
   	 to store the result of a scanf operation on a regular variable,
       its name should be preceded by the reference operator (&)
       Link reference: http://www.cplusplus.com/reference/cstdio/scanf/
   */
   printf("Masukan sebuah nilai: "); scanf("%d",&nilai);
   printf("Masukan nilai tugas: "); scanf("%d",&tugas);
   /*
   	Ketika integer dibagi, hasil "/" operator adalah hasil bagi
    	aljabar dengan bagian pecahan dibuang
   */
   //total = (nilai+tugas)*0.5;
   total = (nilai+tugas)/2;
   if (total>=70) {
      printf("Total adalah %.2f sehingga lulus \n",total);
   } else {
   	printf("Total adalah %.2f sehingga tidak Lulus\n",total);
	}
   getch();
}
