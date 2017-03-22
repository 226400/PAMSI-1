#include <iostream>
#include <cstdio>
#include <ctime>
#include "tablica.hh"
#include "stoper.hh"
#define POWTORZENIA 10
#define ROZMIAR 10
#define MAX 10000

using namespace std;


double* zmierzCzasObliczen(Mierzalny* problem, int rozmiarProblemu, int iloscPowtorzen, double &Srednia)  {

  Stoper stoper;
  double* Wyniki = new double(iloscPowtorzen);

  for (int i=0; i<iloscPowtorzen; i++) {
    stoper.start();
    problem->wykonajObliczenia(rozmiarProblemu);
    stoper.stop();
    problem->resetuj(ROZMIAR);
    Wyniki[i] = stoper.czas();
    Srednia += Wyniki[i];
  }

  Srednia /= iloscPowtorzen;

  return &Wyniki[0];

}

int main() {
  double srednia = 0;
  int rozmiarProblemu = MAX;
  int iloscPowtorzen = POWTORZENIA;
  Mierzalny* problem = new Tablica(ROZMIAR);
  double* Wyniki = zmierzCzasObliczen(problem, rozmiarProblemu, iloscPowtorzen, srednia);
  
  cout << "\nCzasy obliczen wynosza kolejno: " <<endl;
  for (int i=0; i<iloscPowtorzen; i++) {
    cout << Wyniki[i] << " s" << endl;
  }
  cout << "\nSredni czas obliczen wynosi: " << srednia << " s" << endl;
  return 0;
  
}
