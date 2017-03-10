#include <iostream>
#include <cstdio>
#include "tablica.hh"

using namespace std;


Tablica::Tablica() {
  
  _rozmiar = 1;
  _Tablica = new int[_rozmiar];
  _Tablica[0] = 0;

}

Tablica::~Tablica() {
  delete [] _Tablica;

}


Tablica::Tablica(int rozmiar) {

  _rozmiar = rozmiar;
  _Tablica = new int[_rozmiar];
  for (int i=0; i<rozmiar; i++) {
    _Tablica[i] = 0;
  }
}


void Tablica::przypisz(int pozycja, int wartosc) {

  _Tablica[pozycja] = wartosc;

}


void Tablica::odczytaj(int pozycja, int *wartosc) {

  *wartosc = _Tablica[pozycja];
  
}


void Tablica::pokaz_rozmiar(int rozmiar) {

  rozmiar = _rozmiar;

}
