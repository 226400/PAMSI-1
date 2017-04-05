#include "iMierzalny.hh"
#include "iKontener.hh"
class Stos : public Kontener, public Mierzalny {
  
public:
  void add(Element);
  Element get();
  int size();
  Element* find(Element);
  Element top();
  void wykonajObliczenia(int);
  void resetuj();
  
};

/*
  [IN]:
  element - element, który jest umieszczany na szczycie stosu (odpowiednik push() )
*/
void Stos::add(Element element) {

}


/*
  [OUT]:
  element - element, który jest zdejmowany ze szczytu stosu oraz zwracany
  przez metodę (odpowienik pop() )
*/
Element Stos::get() {
  return element;
}



/*
  [OUT]:
  rozmiar - ilosc elementow na stosie
*/
int Stos::size() {
  return rozmiar
}




/*
  [IN]:
  element - element, który ma zostać znaleziony

  [OUT]:
  element1 - wskaźnik na znaleziony element
 */
Element* Stos::find(Element element) {
  return element1;
}



/*
  [OUT]:
  element - element na szczycie stosu, który jest zwracany przez metodę
*/
Element Stos::top() {
  return element;
}
