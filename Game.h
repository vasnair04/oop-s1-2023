#ifndef GAME_H
#define GAME_H
#include "Character.h"
#include "Trap.h"
#include "Utils.h"
#include <tuple>
#include <vector>


class Game{
  private:
    std::vector<Cell*>& Grid;
    int numCharacters;
    int numTraps;
    int GridWidth;
    int GridHeight;
  public:
    Game();
    std::vector<Cell*>& getGrid();
    void initGame(int numCharactersinp, int numTrapsinp, int gridWidthinp, int gridHeightinp);
    void gameLoop(int maxIterations, double trapActivationDistance);

}








#endif