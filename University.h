#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <string>
#include "Course.h"

class University {
  private:
    std::string name;
    std::string location;
    Course* courses;
  public:
    int count = 0;
    University(std::string nam,std::string locati);
    University();
    void addCourse(int id, std::string name);
    ~University();
};


#endif