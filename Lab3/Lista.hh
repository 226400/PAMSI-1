#include "iMierzalny.hh"
#include "iKontener.hh"

class Lista : public Kontener, public Mierzalny {

  Element* head;
  int rozmiar;
public:
  Lista();
  ~Lista();
  void add(int);
  Element* get();
  int size();
  Element* find(int);
  void wykonajObliczenia(int, double);
  void resetuj();
  
};

