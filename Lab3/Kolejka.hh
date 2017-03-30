
class Kolejka : public Kontener {
  
public:
  virtual void add(Element);
  virtual Element get();
  virtual int size();
  virtual *Element find(Element);
  Element end();
  
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
*Element Kolejka::find(Element element) {
  return element1;
}



/*
  [OUT]:
  element - element na końcu kolejki, który jest zwracany przez metodę
*/
Element Kolejka::end() {
  return element;
}
