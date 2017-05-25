#include "board.h"

Board::Board()
{
    x = 20; //initialize board size values to 20/20
    y = 20;

    map = new std::vector<Terrain>;         //create vector of vectors
    map.resize(x);                          //resize to 20 across
    for(int i = 0; i < map.size(); i++)     //for each spot, attach a vector of y size
    {
        map[i] = new std::vector<Terrain>;
        map[i].resize(y);
    }
}

Board::~Board()                             //principles of mem management; for each new, must have a delete!
{
    for(int i = 0; i < map.size(); i++) //deallocate each vector in map
    {
        delete map[i];
    }
    delete map;                                 //dealloc map
}

std::vector< std::vector<Terrain> > Board::getMap()    //returns map
{
    return map;
}

void Board::initMap()                                 //initialize map from a save file
{
    //tbi
}

void Board::printBoardState()                         //output the board state to std::cout
{
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            map[i,j].printTile();
        }
    }
}
Terrain::Terrain()
{
    occupied = false;
    terrainType = 1;
}
