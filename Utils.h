#ifndef UTILS_H
#define UTILS_H
#include <vector>
#include <tuple>

using namespace std;

class Utils{
  protected:
  public:
    tuple<int,int> generateRandomPos(int GridWidth,int GridHeight);
    double calculateDistance(std::tuple<int,int> pos1,std::tuple<int,int> pos2);

};





#endif
