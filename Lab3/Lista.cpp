#include "Lista.hh"
#include "stoper.hh"
#include <iostream>
#include <cstdlib>

Lista::Lista() {
  head = NULL;
  rozmiar = 0;
}


Lista::~Lista() {
  Element* temp;
  while (head) {
    temp = getNext(head);
    delete head;
    head = temp;
  }
  rozmiar = 0;
}

void Lista::add(int value) {
  Element* nowy = new Element();
  nowy.setValue(value);
  nowy.setNext(head);
  head = nowy;
  rozmiar++;
}

Element* Lista::get() {
  Element* temp;
  temp = head;
  if(temp) {
    head = getNext(temp);
    delete p;
    rozmiar--;
    return head;
  }
  return NULL;
}

int Lista::size() {
  return rozmiar;
}


Element* Lista::find(int szukana) {
  Element* temp = head;
  while(temp) {
    if (temp.getValue == szukana)
      return temp;
    else
      temp = getNext(temp);
  }
  return NULL
}

void Lista::wykonajObliczenia(int rozmiarProblemu, double &wynik) {
  srand(time(NULL));
  Stoper stoper;
  for(int i=0; i<rozmiarProblemu; i++) {
    int liczba = (std::rand()%rozmiarProblemu);
    add(liczba);
  }
  int szukana = std::rand()%rozmiarProblemu;
  stoper.start();
  Element* znaleziony = find(szukana);
  stoper.stop();
  wynik += stoper.czas();
}

void Lista::resetuj(int rozmiarProblemu) {
  while(get());
}
  
