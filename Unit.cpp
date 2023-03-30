#include "Unit.h"

Unit::Unit() {
  val = 0;
  numBed = 0;
  area = 0;
}

Unit::Unit(int unit_val, int num_beds, double unit_size){
  val = unit_val;
  numBed = num_beds;
  area = unit_size;
}

Unit::~Unit(){

};

int Unit::get_num_bedrooms(){
  return numBed;
}

int Unit::get_value(){
  return val;
}

double Unit::get_area(){
  return area;
}
