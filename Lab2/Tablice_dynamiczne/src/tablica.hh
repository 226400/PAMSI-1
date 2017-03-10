
class Tablica {
  
  int _rozmiar;
  int _buforrozmiar;
  int _wypelnienie;
  int*  _Tablica;
  int* _buforTablica;
  
public:
  Tablica();
  Tablica(int);
  ~Tablica();
  void przypisz(int, int, int&);
  void odczytaj(int, int&);
  void pokaz_rozmiar(int&);

};
  
