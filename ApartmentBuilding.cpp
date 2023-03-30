#include "ApartmentBuilding.h"

ApartmentBuilding::ApartmentBuilding(){
  max = 10;
  units = new Unit[max];
}

ApartmentBuilding::ApartmentBuilding(int capacity){
  max = capacity;
  units = new Unit[max];
}

int ApartmentBuilding::get_capacity() {
  return max;
}

int ApartmentBuilding::get_current_number_of_units(){
return count[0];
}

Unit* ApartmentBuilding::get_contents(){
  return units;
}

bool ApartmentBuilding::add_unit(Unit unit){
  if (get_current_number_of_units()==max){
    return 0;
  } else {
    units[get_current_number_of_units()] = unit;
    count[0]++;
    return 1;
  }
}

ApartmentBuilding::~ApartmentBuilding(){
  delete [] units;
  delete [] count;
}