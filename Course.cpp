#include "Course.h"

Course::Course(int ident,std::string nam){
  id = ident;
  name = nam;
}

Course::Course() {
  id = 0;
  name = "Null";
}

