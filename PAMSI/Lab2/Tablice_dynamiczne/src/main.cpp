#include <iostream>
#include <cstdio>
#include "tablica.hh"

using namespace std;

int main() {
  int rozmiar = 0, pozycja = 0, wartosc = 0, wartosc1 = 0;
  
  cout << "Podaj rozmiar tablicy:" << endl;
  cin >> rozmiar;
  Tablica tablica = new Tablica(rozmiar);
  cout << "Podaj pozycje: " << endl;
  cin >> pozycja;
  cout << "Podaj wartosc: " << endl;
  cin >> wartosc;
  tablica.przypisz(pozycja, wartosc);
  tablica.odczytaj(pozycja, wartosc1);
  cout << "Odczytana wartosc to: " << wartosc1 << endl;
  return 0;
  
}
