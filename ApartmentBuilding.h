#ifndef APARTMENTBUILDING_H
#define APARTMENTBUILDING_H

#include "Unit.h"

class ApartmentBuilding
{
  private:
  Unit *units;
  int max;
  public:
  ApartmentBuilding();              
  ApartmentBuilding(int capacity); 
  int get_capacity(); 
  int get_current_number_of_units(); 
  Unit * get_contents();
  bool add_unit(Unit unit);
  ~ApartmentBuilding();
};

#endif