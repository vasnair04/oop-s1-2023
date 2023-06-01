#ifndef EFFECT_H
#define EFFECT_H
#include "Cell.h"

class Effect{
  protected:
    Cell& cell;
  public:
    virtual void apply(Cell& cell);

};





#endif