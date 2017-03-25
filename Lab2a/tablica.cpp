#include <iostream>
#include <cstdio>
#include "tablica.hh"
#define TRYB 0  //powiekszanie o 1
//#define TRYB 1  //powiekszanie x2

using namespace std;


Tablica::Tablica() {
  
   _rozmiar = 1;
  _wypelnienie = 0;
  _blad = 0;
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
  _wypelnienie = 0;
  
}


void Tablica::przypisz(int pozycja, int wartosc) {

  if(_wypelnienie==_rozmiar)
    powieksz(TRYB);  
  if(_wypelnienie<_rozmiar) {
    _Tablica[pozycja] = wartosc;
    _wypelnienie++;
  }
  
}


int Tablica::odczytaj(int pozycja) {
  return _Tablica[pozycja];
}


int Tablica::pokaz_rozmiar() {
  return _rozmiar;
}

void Tablica::powieksz(int tryb) {

  if(tryb) {
    int* bufor = new int[2*_rozmiar];

    for(int i=0; i<_rozmiar; i++) {
      bufor[i] = _Tablica[i];
    }
    
    _rozmiar = 2*_rozmiar;
    //delete [] _Tablica;
    _Tablica = &bufor[0];
  }

  else {
    int* bufor = new int[_rozmiar +1];

    for (int i=0; i<_rozmiar; i++) {
      bufor[i] = _Tablica[i];
    }
    
    _rozmiar++;
    //delete [] _Tablica;
    _Tablica = &bufor[0];
  }
   

}




void Tablica::wykonajObliczenia(int rozmiar) {

  for(int i=0; i<rozmiar; i++) {
    przypisz(i, 1);
  }
  
}

void Tablica::resetuj(int rozmiar) {

  //delete [] _Tablica;
  int *bufor = new int[rozmiar];
  _rozmiar = rozmiar;
  _Tablica = &bufor[0];
  
  for (int i=0; i<rozmiar; i++) {
    _Tablica[i] = 0;
  }
  _wypelnienie = 0;
  

}

