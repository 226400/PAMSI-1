#include "mierzalne.hh"

class Tablica : public Mierzalny {
  
  int _rozmiar;
  int _blad;
  int _wypelnienie;
  int*  _Tablica;
  void powieksz(int);
  
public:
  Tablica();
  Tablica(int);
  ~Tablica();
  void przypisz(int, int, int&);
  void odczytaj(int, int&);
  void pokaz_rozmiar(int&);
  void wykonajObliczenia(int);
  void resetuj(int);

};
  
