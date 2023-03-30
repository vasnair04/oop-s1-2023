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
  int count = 0;
  for (int i = 0; i<max; i++){
    if (units[i].get_area()!=-1) {
      count++;
    }
  }
  return count;
}

Unit* ApartmentBuilding::get_contents(){
  return units;
}

bool ApartmentBuilding::add_unit(Unit unit){
  if (get_current_number_of_units()==max){
    return 0;
  } else {
    units[get_current_number_of_units()] = unit;
    return 1;
  }
}

ApartmentBuilding::~ApartmentBuilding(){
  delete [] units;
}