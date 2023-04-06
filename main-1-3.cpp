#include <iostream>
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include <string>

using namespace std;

int main(){
  ParkingLot carpark2(10);
  string* current = new string[1];
  string* type = new string[3];
  int ID = 0;
  for (int i=0;i<3;i++) {
    cout << "What vehicle would you like to park?" << endl;
    cin >> current[0];
    cout << "What is the id of this vehicle?" << endl;
    cin >> ID;
    if (current[0]=="Car"){
      Vehicle vehicle = Car(ID);
      carpark2.parkVehicle(&vehicle) ;
      type[i] = "Car";
    } else if(current[0]=="Bus") {
      Vehicle vehicle = Bus(ID);
      carpark2.parkVehicle(&vehicle) ;
      type[i] = "Bus";
    } else if(current[0]=="Motorbike") {
      Vehicle vehicle = Motorbike(ID);
      carpark2.parkVehicle(&vehicle) ;
      type[i] = "Motorbike";
    } else {
      cout << "invalid input!" << endl;
      i++;
    }
  }
  cout << carpark2.countOverstayingVehicles(0) << endl;
  return 0;
}