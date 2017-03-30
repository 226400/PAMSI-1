
class Lista : public Kontener {
  
public:
  virtual void add(Element);
  virtual Element get();
  virtual int size();
  virtual Element* find(Element);
  Element* next(Element);
  Element* prev(Element);
  
};

/*
  [IN]:
  element - element, który jest umieszczany na początku listy
*/
void Lista::add(Element element) {

}


/*
  [OUT]:
  element - element, który jest zdejmowany z listy oraz zwracany
  przez metodę
*/
Element Lista::get() {
  return element;
}



/*
  [OUT]:
  rozmiar - ilosc elementow na liscie
*/
int Lista::size() {
  return rozmiar
}




/*
  [IN]:
  element - element, który ma zostać znaleziony

  [OUT]:
  element1 - wskaźnik na znaleziony element
 */
Element* Lista::find(Element element) {
  return element1;
}



/*
  [IN]
  element - podany element

  [OUT]
  element1 - wskaźnik, na element następny od wejściowego
*/
Element* next(Element element){
  return element1;
}

/*
  [IN]
  element - podany element

  [OUT]
  element1 - wskaźnik, na element poprzedni od wejściowego
*/
Element* prev(Element);
