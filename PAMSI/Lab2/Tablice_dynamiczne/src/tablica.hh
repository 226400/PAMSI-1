
class Tablica {
  
  int _rozmiar;
  int _wypelnienie;
  int*  _Tablica;
  void powieksz_tablice();

  
public:
  Tablica();
  Tablica(int);
  ~Tablica();
  void przypisz(int, int);
  void odczytaj(int, *int);
  void pokaz_rozmiar(int);

};
  
