#include "AirCraft.h"

AirCraft::AirCraft(){
  weight = 0;
  fuel = 100;
  numberOfFlights = 0;
}

AirCraft::AirCraft(int w){
  weight = w;
  fuel = 100;
  numberOfFlights = 0;
}

void AirCraft::refuel(){
  fuel = 100;
}

void AirCraft::fly(){
  numberOfFlights++;
}

float AirCraft::get_fuel(){
  return fuel;
} 

int AirCraft::get_weight(){
  return weight;
}

int AirCraft::get_numberOfFlights(){
  return numberOfFlights;
}

void AirCraft::set_fuel(float f){
  if (f>100){
    fuel = 100;
  } else {
    fuel = f;
  }
}

void AirCraft::set_weight(int w){
  weight = w;
}

void AirCraft::set_numberOfFlights(int flights){
  numberOfFlights = flights;
}