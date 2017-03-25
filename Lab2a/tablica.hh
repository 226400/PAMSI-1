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
  void przypisz(int, int);
  int odczytaj(int);
  int pokaz_rozmiar();
  virtual void wykonajObliczenia(int);
  virtual void resetuj(int);

};
  
