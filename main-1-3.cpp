#include <iostream>
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include <string>

using namespace std;

int main(){
  int num = 0;
  cout << "How many vehicles would you like to park: " << endl;
  cin >> num;
  Vehicle* parking = new Vehicle[num];
  string* current = new string[1];
  string* type = new string[num];
  for (int i=0;i<num;i++) {
    cout << "What vehicle would you like to park?" << endl;
    cin >> current[0];
    if (current[0]=="car"){
      parking[i] = Car(i);
      type[i] = "car";
    } else if(current[0]=="bus") {
      parking[i] = Bus(i);
      type[i] = "bus";
    } else if(current[0]=="motorbike") {
      parking[i] = Motorbike(i);
      type[i] = "motorbike";
    } else {
      cout << "invalid input!" << endl;
      num++;
    }
  }
  for (int i=0;i<num;i++) {
    cout << "Vehicle of type " << type[i] << " with ID: " << parking[i].get_ID() << " has been parked for " << parking[i].getParkingDuration() << " seconds" << endl;
  }
  delete [] parking;
  delete [] current;
  delete [] type;
  return 0;
}