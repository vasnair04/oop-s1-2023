#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
  protected:
  bool isOn;
  int powerRating;
  public:
  Appliance();
  Appliance(int powerRating);
  void turnOn();
  void turnOff();
  virtual double getPowerConsumption();
  bool get_isOn();
  int get_powerRating();
};


#endif