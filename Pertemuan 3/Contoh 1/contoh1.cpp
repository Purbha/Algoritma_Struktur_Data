#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void main()
{
  int x,y;
  int a,b,c,d;
  clrscr();
  cout<<"Masukan Nilai A: "; cin>>x;
  cout<<"Masukan Nilai B: "; scanf("%d",&y);
  /*Left Value						Operator								Right value*/
  /*===================================================================*/
  			a								=										  	x+y;
  			c								=										  	x%y;
  			b								=											x-y;
  			d								=											x*y;
  /*===================================================================*/
  cout<<endl<<endl;
  printf("Hasil Dari A = X+Y= %i \n",a);
  printf("Hasil Dari B = X-Y= %i \n",b);
  cout<<"Hasil dari C = X%Y= "<<c<<endl;
  cout<<"Hasil dari D = X*Y = "<<d<<endl;
  getch();
}
