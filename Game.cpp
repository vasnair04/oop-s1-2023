#include "Game.h"
#include "iostream"

Game::Game(){
 numCharacters = 0;
 numTraps = 0;
 GridWidth = 0;
 GridHeight= 0;
}


std::vector<Cell*>& Game::getGrid(){
  return Grid;
}


void Game::initGame(int numCharactersinp, int numTrapsinp, int gridWidthinp, int gridHeightinp){
  numCharacters = numCharactersinp;
  numTraps = numTrapsinp;
  GridWidth = gridWidthinp;
  GridHeight = gridHeightinp;
  return;
}
void Game::gameLoop(int maxIterations, double trapActivationDistance){
  Utils u1;
  Character* c1[numCharacters];
  Trap* t1[numTraps];
  int windconditiion;
  for (int i=0;i<maxIterations;i++){
    for (int j=0;j<numCharacters;j++){
      c1[j]->move(1,0);
      for (int k=0;k<numTraps;k++){
        if (u1.calculateDistance(c1[j]->getPos(),t1[k]->getPos())<=trapActivationDistance){
          t1[k]->apply(&(c1[j]));
        }
      }
      if((c1[j]->getPos()<0>) > GridWidth||(c1[j]->getPos()<1>) > GridHeight){
        std::cout << "Character has won the game!" << endl;
        i = (maxIterations-1);
        windconditiion = 1;
      }
    }
  }
  if (windconditiion==0){
    std::cout << "Game is over" << std::endl;
  }
}