#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class AirCraft{
  protected:
  int weight;
  float fuel;
  int numberOfFlights;
  public:
  AirCraft();
  AirCraft(int w);
  void refuel();
  virtual void fly(int headwind, int minutes);
  float get_fuel();
  int get_weight();
  int get_numberOfFlights();
  void set_fuel(float f);
  void set_weight(int w);
  void  set_numberOfFlights(int flights);
};


#endif