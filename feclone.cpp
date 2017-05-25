#include "feclone.h"


FEClone::FEClone()
{
    board = new Board;
}
FEClone::~FEClone()
{
    delete board;
}

void initGame()
{
    board.initMap();
}

void saveGame()
{
    //write board configuration to save file
}

//void runGame(); will handle after get board instantiating
void makeMove();



