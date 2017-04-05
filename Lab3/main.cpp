#include <iostream>
#include <cstdio>
#include <ctime>
#include "Lista.hh"
#include "stoper.hh"
#define POWTORZENIA 10
#define ROZMIAR 10
#define MAX 10000

using namespace std;


void zmierzCzasObliczen(Mierzalny* problem, int rozmiarProblemu, int iloscPowtorzen, double &srednia)  {
  double wynik;
  for (int i=0; i<iloscPowtorzen; i++) {
    problem->wykonajObliczenia(rozmiarProblemu, wynik);
    problem->resetuj(ROZMIAR);
    srednia += wynik;
  }
  srednia /= iloscPowtorzen;
}

int main() {
  double srednia = 0;
  int iloscPowtorzen = POWTORZENIA;
  Mierzalny* problem = new Lista();
  zmierzCzasObliczen(problem, ROZMIAR, iloscPowtorzen, srednia);
  
  cout << "\nSredni czas obliczen wynosi: " << srednia <<endl;

  return 0;
  
}
