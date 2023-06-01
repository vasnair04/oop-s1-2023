#ifndef CHARACTER_H
#define CHARACTER_H
#include "Cell.h"

class Character: public Cell{
  public:
  Character(int xpos, int ypos);
  void move(int dx, int dy);
};




#endif