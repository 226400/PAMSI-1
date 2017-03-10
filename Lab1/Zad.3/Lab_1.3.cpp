#include <iostream>
#include <cstdlib>

using namespace std;

int Potega(int x, int p) {
  if(p==0)
    return 1;
  else
    return x=x*Potega(x,--p);
}

int Silnia(int x) {
  if (x<2)
    return 1;
  else
    return x*Silnia(x-1);
}

int main() {
  int x, p;
  int opcja;
  do {
    cout << "\nMENU GLOWNE";
    cout << "\n1. Potega";
    cout << "\n2. Silnia";
    cout << "\n0. Koniec programu";
    cout << "\nWYBIERZ OPCJE: ";
    cin >> opcja;
    switch(opcja){
    case 0: {
      cout << "\nDZIEKUJE ZA UWAGE!" << endl;
      cout << "\nDOBRANOC" << endl << endl << endl;
      break;
    }
      case 1: {
      cout << "\nPodaj podstawe: ";
      cin >> x;
      cout << "\nPodaj wykladnik: ";
      cin >> p;
      cout << endl << x << " ^ " << p << " = " << Potega(x,p) << endl;
      break;
    }
    case 2: {
      cout << "\n Podaj liczbe: ";
      cin >> x;
      cout << endl << x << "! = " << Silnia(x) << endl;
      break;
    }
    }
  } while(opcja);
      return 0;
}
