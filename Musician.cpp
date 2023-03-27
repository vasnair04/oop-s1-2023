#include "Musician.h"

Musician::Musician(){
  inst = "null";
  exp = 0;
}
Musician::Musician(std::string instrument, int experience){
  inst = instrument;
  exp = experience;
}

std::string Musician::get_instrument() {
  return inst;
}

int Musician::get_experience(){
  return exp;
}