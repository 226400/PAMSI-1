#include "Element.hh"

class Kontener {

public:
  virtual void add(int);
  virtual Element* get();
  virtual int size();
  virtual Element* find(int);
};
