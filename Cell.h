#ifndef CELL_H
#define CELL_H
#include <vector>


class Cell {
  protected:
    int x;
    int y;
    char type;
  public:
    Cell();
    Cell(int x,int y,char type);
    std::tuple<int,int> getPos();
    char getType();
    void setPos(int x,int y);
    void setType(char type);
};









#endif