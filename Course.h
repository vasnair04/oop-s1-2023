#ifndef COURSE_H
#define COURSE_H
#include <string>

class Course{
  private:
    std::string name;
    int id;
  public:
    Course(int ident,std::string nam);
    Course();
};


#endif