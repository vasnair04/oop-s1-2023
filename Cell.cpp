#include "Cell.h"
#include <vector>
#include <tuple>

using namespace std;

Cell::Cell(int xinp,int yinp,char typ){
  x = xinp;
  y = yinp;
  type = typ;
}

tuple<int,int> Cell::getPos(){
  return {x, y} ;
}

char Cell::getType(){
  return type;
}

void Cell::setPos(int xinp,int yinp){
  x = xinp;
  y = yinp;
}

void Cell::setType(char typeinp){
  type = typeinp;
}



