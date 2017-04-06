#include "iMierzalny.hh"
#include "iKontener.hh"

class Kolejka : public Kontener, public Mierzalny {
  
public:
  void add(Element);
  Element get();
  int size();
  Element* find(Element);
  Element end();
  void wykonajObliczenia(int);
  void resetuj();
};

/*
  [IN]:
  element - element, który jest umieszczany na końcu (odpowiednik push() )
*/
void Kolejka::add(Element element) {

}


/*
  [OUT]:
  element - element, który jest zdejmowany z końca kolejki oraz zwracany
  przez metodę (odpowienik pop() )
*/
Element Kolejka::get() {
  return element;
}



/*
  [OUT]:
  rozmiar - ilosc elementow w kolejce
*/
int Kolejka::size() {
  return rozmiar
}




/*
  [IN]:
  element - element, który ma zostać znaleziony

  [OUT]:
  element1 - wskaźnik na znaleziony element
 */
Element* Kolejka::find(Element element) {
  return element1;
}



/*
  [OUT]:
  element - element na końcu kolejki, który jest zwracany przez metodę
*/
Element Kolejka::end() {
  return element;
}
