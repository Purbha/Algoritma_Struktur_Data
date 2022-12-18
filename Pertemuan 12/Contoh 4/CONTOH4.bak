//Contoh Struktur Lanjutan
#include <iostream.h>
#include "string.h"
#include <conio.h>

struct film {
  char judul[20];
  char tahun[4];
} aku,kamu;

void cetakfilm(film siapa);

void main()
{
  strcpy(aku.judul,"THOR 2");
  strcpy(aku.tahun,"2013");
  cout<<"Judul Film Kamu: ";cin>>kamu.judul;
  cout<<"Masukan Tahun  : ";cin>>kamu.tahun;
  cout<<"Film favorit aku adalah:\n";
  cetakfilm(aku);
  cout<<"Film favorit kamu adalah:\n";
  cetakfilm(kamu);
  getch();
}

void cetakfilm (film siapa)
{
  cout<<siapa.judul;
  cout<<" ("<<siapa.tahun<<")\n";
}