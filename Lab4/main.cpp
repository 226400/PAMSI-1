#include <iostream>
#include <cstdio>
#include <ctime>
#include "tablica.hh"
#define ROZMIAR 10
#define MAX 1000000

using namespace std;


int podziel(Tablica &tablica, int poczatek, int koniec) {
  int bufor;
  int temp = tablica.wartosc(poczatek);
  int i = poczatek;
  int j = koniec;
  while(1) {
    while (tablica.wartosc(j)>temp)
      j--;
    while (tablica.wartosc(i)<temp)
      i++;
    if(i<j) {
      bufor = tablica.wartosc(i);
      tablica.przypisz(i,tablica.wartosc(j));
      tablica.przypisz(j, bufor);
      i++;
      j--;
    }
    else
      return j;
  }
  
}

void quicksort(Tablica &tablica, int poczatek, int koniec) {
  int srodek;
  if (poczatek<koniec) {
    srodek = podziel(tablica, poczatek, koniec);
    quicksort(tablica, poczatek, srodek);
    quicksort(tablica, srodek+1, koniec);
  }
}

int main() {
  //clock_t start, stop;
  //double czas;
  Tablica tablica(1);
  int wartosc;
  
  for(int i=0; i<ROZMIAR; i++) {
    cout << "Wpisz liczbe: ";
    cin >> wartosc;
    cout << endl;
    tablica.przypisz(i,wartosc);
  }
  cout << endl;
  cout << "Podano następujace liczby: \n";
  for(int i=0; i<ROZMIAR; i++) {
    cout << tablica.wartosc(i) << " ";
  }
  cout << "\n\nQUICKSORT: \n";
  quicksort(tablica, 0, ROZMIAR-1);
  for(int i=0; i<ROZMIAR; i++) {
    cout << tablica.wartosc(i) << " ";
  }
}
