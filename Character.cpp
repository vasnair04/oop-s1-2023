#include "Character.h"


Character::Character(int xpos, int ypos){
  x = xpos;
  y = ypos;
  type = 'C';
}

void Character::move(int dx,int dy){
  x = x + dx;
  y = y + dx;
}


