#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

void zapiszTXT(int *Tablica, int N){
  string nazwaOut;
  cout << "\nPodaj nazwe pliku do zapisu: ";
  cin >> nazwaOut;
  fstream plik(nazwaOut.c_str(), ios::out);
  if (plik.good()){
    for (int i(0); i<N; i++)
      plik << Tablica[i] << " ";
    plik.close();
  }
  cout << "\nZapisano tablice w pliku " << nazwaOut << endl;
}

void wczytajTXT(int* Tablica, int N){
  string nazwaIn;
  cout << "\nPodaj nazwe pliku do odczytu: ";
  cin >> nazwaIn;
  fstream plik(nazwaIn.c_str(), ios::in);
  if (plik.good()){
    for (int i(0); i<N; i++)
      plik >> Tablica[i];
    plik.close();
  }
  cout << "\nWczytano tablice z pliku " << nazwaIn << endl;
  for (int i(0); i<N; i++)
    cout << "[" << Tablica[i] << "] ";
}

void zapiszBIN(int* Tablica, int N){
  string nazwaOut;
  cout << "\nPodaj nazwe pliku do zapisu: ";
  cin >> nazwaOut;
  ofstream plik(nazwaOut.c_str(), ofstream::binary);
  char* temp = new char[sizeof(int)];
    for (int i(0); i<N; i++){
      cout << "UWAGA" << endl;
      temp=(char*)Tablica+i;
      plik.write(temp, sizeof(int));
    }
  plik.close();
  cout << "\nZapisano tablice w pliku: " << nazwaOut << endl;
}

void wczytajBIN(int* Tablica, int N){
  string nazwaIn;
  cout << "\nPodaj nazwe pliku do odczytu: ";
  cin >> nazwaIn;
  ifstream plik(nazwaIn.c_str(), ios::binary);
  if (plik.good()){
    char* temp = new char[sizeof(int)];
    for(int i(0); i<N; i++){
      plik.read(temp, sizeof(int));
      Tablica[i] = (int)(temp);
    }
    plik.close();
  }
  cout << "\nWczytano tablice z pliku " << nazwaIn << endl;
  for (int i(0); i<N; i++)
    cout << "[" << Tablica[i] << "] ";
}
  
				  
int main(){
  int opcja;
  int n;
  cout << "\nPodaj ilosc elementow: ";
  cin >> n;
  int* tablica = new int [n];
  do{
    cout << "\n1.Zapisz tablice do pliku tekstowego" << endl;
    cout << "2.Wczytaj tablice z pliku tekstowego" << endl;
    cout << "3.Zapisz tablice do pliku binarnego" << endl;
    cout << "4.Wczytaj tablice z pliku binarnego" << endl;
    cout << "0.Zakoncz program" << endl;
    cout << "Wybierz opcje: ";
    cin >> opcja;

    switch(opcja){
    case 0: break;
    case 1: {
      zapiszTXT(tablica, n);
      break; }
    case 2: {
      wczytajTXT(tablica, n);
      break; }
    case 3: {
      zapiszBIN(tablica, n);
      break; }
    case 4: {
      wczytajBIN(tablica, n);
      break; }
    }
  } while (opcja!=0);
}
