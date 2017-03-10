#include <iostream>
#include <cstdio>
#include "tablica.hh"

using namespace std;


Tablica::Tablica() {
  
  _rozmiar = 1;
  _wypelnienie = 0;
  _Tablica = new int[_rozmiar];
  _Tablica[0] = 0;

}

Tablica::~Tablica() {
  delete [] _Tablica;
  delete [] _buforTablica;
  cout << "\nUsuwam tablice. " << endl;

}


Tablica::Tablica(int rozmiar) {

  _rozmiar = rozmiar;
  _Tablica = new int[_rozmiar];
  for (int i=0; i<rozmiar; i++) {
    _Tablica[i] = 0;
  }
  _wypelnienie = 0;
}


void Tablica::przypisz(int pozycja, int wartosc, int &blad) {

  if(_wypelnienie<_rozmiar) {
    _Tablica[pozycja] = wartosc;
    _wypelnienie++;
  }
  
  if(_wypelnienie==_rozmiar)
    blad = 1;
  
}


void Tablica::odczytaj(int pozycja, int &wartosc) {

  wartosc = _Tablica[pozycja];
  
}


void Tablica::pokaz_rozmiar(int &rozmiar) {

  rozmiar = _rozmiar;

}

    
  
