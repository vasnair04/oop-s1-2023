#include "Trap.h"

Trap::Trap(int xinp,int yinp){
  x = xinp;
  y = yinp;
  type = 'T';
  Active = 1;
}

bool Trap::isActive(){
  return Active;
}


void Trap::apply(Cell& cell){
  cell->setType() = 'T';
  Active = 0;
}