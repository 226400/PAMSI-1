#include <iostream>
#include <cstdio>
#include <ctime>
#include "tablica.hh"
#define ROZMIAR 10
#define MAX 1000000

using namespace std;


int main() {
  int blad = 0;
  clock_t start, stop;
  double czas;
  Tablica tab(ROZMIAR);

  start = clock();
  
  for (int i=0; i<MAX; i++) {
    tab.przypisz(i, 1, blad);
  }

  stop = clock();
  czas = (double)(stop-start)/CLOCKS_PER_SEC;
  cout << "Uplynelo " << czas << " s" << endl;
}
