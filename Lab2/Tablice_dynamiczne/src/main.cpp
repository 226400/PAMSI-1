#include <iostream>
#include <cstdio>
#include <ctime>
#include "tablica.hh"
#define ROZMIAR 10
#define MAX 10000000
#define TRYB 0 //powiekszanie o 1
//#define TRYB 1  //powiekszanie x2

using namespace std;

void powieksz(Tablica* stara, int tryb) {
  int blad;
  int aktualnyRozmiar;
  int wartosc;
  stara->pokaz_rozmiar(aktualnyRozmiar);

  if (tryb) {
    Tablica* nowa = new Tablica(aktualnyRozmiar*2);
    for (int i=0; i<aktualnyRozmiar; i++) {
      stara -> odczytaj(i,wartosc);
      nowa -> przypisz(i,wartosc,blad);
    }
    stara = nowa;
  }
	
  else {
    Tablica* nowa = new Tablica(aktualnyRozmiar+1);
    for (int i=0; i<aktualnyRozmiar; i++) {
      stara -> odczytaj(i,wartosc);
      nowa -> przypisz(i,wartosc,blad);
    }
    stara = nowa;
  }
}



int main() {
  int blad = 0;
  clock_t start, stop;
  double czas;

  /*
  cout << "Podaj rozmiar tablicy: " << endl;
  cin >> rozmiar;
  Tablica tablica(rozmiar);
  cout << "Podaj pozycje:  " << endl;
  cin >> pozycja;
  cout << "Podaj wartosc: " << endl;
  cin >> wartosc;
  tablica.przypisz(pozycja, wartosc);
  tablica.odczytaj(pozycja, wartosc1);  
  */
  Tablica* tab = new Tablica(ROZMIAR);

  start = clock();
  for (int i=0; i<MAX; i++) {
    if (blad) {
      powieksz(tab, TRYB);
      blad = 0;
    }
    tab->przypisz(i, 1, blad);
  }

  stop = clock();
  czas = (double)(stop-start)/CLOCKS_PER_SEC;
  cout << "Uplynelo " << czas << " s" << endl;
}
