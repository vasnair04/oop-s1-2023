#ifndef UNIT_H
#define UNIT_H

class Unit
{
private:
  int val;
  int numBed;
  int area; 
public:
  Unit();
  Unit(int unit_val, int num_beds, double unit_size);
  ~Unit();
  int get_num_bedrooms();                               // returns the number of bedrooms for the unit
  int get_value();                                      // returns the value in dollars of the Unit
  double get_area(); 
};


#endif
