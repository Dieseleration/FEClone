#ifndef BOARD_H
#define BOARD_H


class Board
{
    std::vector< std::vector<Terrain> > map; //2D vector of Terrain pointers
    int x;  //horizontal width
    int y;  //vertical width

public:
    Board();
    ~Board();
    std::vector< std::vector<Terrain> > getMap();    //returns map
    void initMap();                                 //initialize map from a file
    void printBoardState();                         //output the board state to std::cout
};

class Terrain
{
    bool occupied;
    int terrainType;

public:
    bool occupied();            //
    int getType();
    void printTile();           //prints the individual tile
    void setType();
    Terrain();
    ~Terrain();
};


#endif // BOARD_H

