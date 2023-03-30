#include "Unit.h"

Unit::Unit() {
  val = 0;
  numBed = 0;
  area = -1;
}

Unit::Unit(int unit_val, int num_beds, double unit_size){
  val = unit_val;
  if (unit_val<0) {
    val = 0;
  }
  numBed = num_beds;
  if (num_beds<0) {
    numBed = 0;
  }
  area = unit_size;
  if (unit_size<0) {
    unit_size = 0;
  }
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
