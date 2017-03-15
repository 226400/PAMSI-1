
class Tablica {
  
  int _rozmiar;
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

};
  
