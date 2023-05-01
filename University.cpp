#include "University.h"

University::University(std::string nam,std::string locati){
  name = nam;
  location = locati;
  courses = new Course[10];
}

University::University(){
  name = "Null";
  location = "Null";
  courses = new Course[1];
}

void University::addCourse(int ident, std::string nam){
  Course c1(ident,nam);
  courses[count];
  count++;
}

University::~University(){
  delete courses;
}