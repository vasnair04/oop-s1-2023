#include "Orchestra.h"
#include "Musician.h"

Orchestra::Orchestra(){
  siz = 0;
  musicians = new Musician[siz];
}

Orchestra::Orchestra(int size){
  siz = size;
  musicians = new Musician[siz];
}

int Orchestra::get_current_number_of_members(){
  int count = 0;
  for (int i=0;i<siz;i++) {
    if (musicians[i].get_instrument()!="null") {
      count++;
    }
  }
  return count;
}

bool Orchestra::has_instrument(std::string instrument){
  int status = 0;
  for (int i=0;i<siz;i++) {
    if ((musicians[i].get_instrument())==(instrument)) {
      status = 1;
    }
  }
  return status;
}

Musician* Orchestra::get_members(){
  return musicians;
}

bool Orchestra::add_musician(Musician new_musician){
  int status = 1;
  if (get_current_number_of_members()==siz) {
    status = 0;
    return status;
  } else { 
    musicians[get_current_number_of_members()] = new_musician;
    return status;
  }
}

Orchestra::~Orchestra(){
  delete [] musicians;
}
