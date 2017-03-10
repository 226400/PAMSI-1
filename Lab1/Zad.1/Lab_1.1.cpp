#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void wypelnij(int **Tablica, int N, int M, int X){
  for(int i(0);i<N;i++)
    for(int j(0);j<M;j++)
      Tablica[i][j] = (rand()%(X+1));
  cout << "\nWypelniono tablice liczbami z zakresu od 0 do " << X << endl; 
}

void wyswietl(int **Tablica, int N, int M){
  for(int i(0);i<N;i++){
    for(int j(0);j<M;j++)
      cout  << "[" << setw(4) <<  Tablica[i][j] << "] ";
    cout << endl;
  }
}

void znajdzMax(int **Tablica, int N, int M, int &MAX){
  MAX=0;
  for(int i(0);i<N;i++)
    for(int j(0);j<M;j++)
      if(Tablica[i][j] > MAX)
	MAX = Tablica[i][j];
  cout << "\nWartosc maksymalna tablicy to " << MAX << endl;
}

int main()
{
  srand (time(NULL));
  int n,m;
  int max;
  int x;
  int opcja;
  cout << "\nPodaj liczbe wierszy: ";
  cin >> n;
  cout << "Podaj liczbe kolumn: ";
  cin >> m;
  int** tablica = new int* [n];
  for (int i(0); i<n; i++)
    tablica[i] = new int [m];

  do{
    cout << "\n1.Wypelnij tablice liczbami losowymi" << endl;
    cout << "2.Wyswietl zawartosc tablicy" << endl;
    cout << "3.Znajdz wartosc maksymalna tablicy" << endl;
    cout << "0.Zakoncz program" << endl;
    cout << "Wybierz opcje: ";
    cin >> opcja;

    switch(opcja){
    case 0: break;
    case 1: {
      cout << "\nPodaj gorna wartosc zakresu: ";
      cin >> x;
      wypelnij(tablica,n,m,x);
      break; }
    case 2: {
      wyswietl(tablica,n,m);
      break; }
    case 3: {
      znajdzMax(tablica,n,m,max);
      break; }
    }
  } while(opcja!=0);

  delete [] tablica;

  return 0;
}
  
