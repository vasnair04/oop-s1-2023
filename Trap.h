#ifndef TRAP_H
#define TRAP_H
#include "Cell.h"
#include "Effect.h"

class Trap : public Cell, Effect {
    bool Active;
  public:
    Trap(int xinp,int yinp);
    bool isActive();
    void apply(Cell& cell);
};



#endif