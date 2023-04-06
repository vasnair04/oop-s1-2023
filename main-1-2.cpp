#include <iostream>
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include <string>

using namespace std;

int main(){
  ParkingLot carpark(10);
  string* current = new string[1];
  string* type = new string[10];
  int ID = 0;
  for (int i=0;i<10;i++) {
    cout << "What vehicle would you like to park?" << endl;
    cin >> current[0];
    cout << "What is the id of this vehicle?" << endl;
    cin >> ID;
    if (current[0]=="Car"){
      Vehicle vehicle = Car(ID);
      carpark.parkVehicle(&vehicle) ;
      type[i] = "Car";
    } else if(current[0]=="Bus") {
      Vehicle vehicle = Bus(ID);
      carpark.parkVehicle(&vehicle) ;
      type[i] = "bus";
    } else if(current[0]=="Motorbike") {
      Vehicle vehicle = Motorbike(ID);
      carpark.parkVehicle(&vehicle) ;
      type[i] = "Motorbike";
    } else {
      cout << "invalid input!" << endl;
      i++;
    }
  }

  cout << "Please enter ID of vehicle to be removed: " << endl;
  cin >> ID;
  carpark.unparkVehicle(ID);
  printf("%d",carpark.getCount());
  return 0;
}