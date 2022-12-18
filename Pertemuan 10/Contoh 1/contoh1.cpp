#include <iostream.h>
#include "stdio.h"
#include <conio.h>

//Deklarasi Define
#define a 10
//Tidak perlu diakhiri dengan ; karena bukan pernyataan
#define b 20

void main() {
	int hasil;
   printf("Nilai dari a adalah %d\n",a);
   printf("Nilai dari b adalah %d\n",b);
   hasil = a * b;
   printf("Nilai dari a * b adalah %d\n",hasil);
 	getch();
}
