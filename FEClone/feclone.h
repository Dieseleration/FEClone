#ifndef FECLONE_H
#define FECLONE_H

#include "feclone_global.h"
#include <vector>
#include <string>

class FECLONESHARED_EXPORT FEClone
{
    Board board;

public:
    FEClone();
    ~FEClone();
    void initGame();
    void saveGame();
    void runGame();
    void makeMove();
};

class FECLONESHARED_EXPORT Board
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

class FECLONESHARED_EXPORT Terrain
{
    bool occupied;
    Unit unit;                  //init to NULL normally
    int terrainType;

public:
    bool hasUnit();
    Unit getUnit();
    void setUnit(Unit x);
    int getType();
    void setType();
    void output();              //print the terrain
    Terrain();
    ~Terrain();
};

class FECLONESHARED_EXPORT Unit
{
      std::vector<Item> inventory;
      int attack;   //stats
      int defense;
      int health;
      int skill;
      int speed;
      int level;
      Weapon equippedWep;
      std::string name;
      int type;     //keyed to some global defs in the global.h

public:
    Unit();
    ~Unit();
    int getType();
    Weapon getWeapon();
    void initUnit();
    int getStat(string st);             //used int the form unitdudename.getStat("attack");
    int setStat(string st, int x);      //set a stat by doing as above, plus the stat

};

class FECLONESHARED_EXPORT Item
{
    Effect effector;                    //particular Effect inheritor class defined in further items
    std::string name;
    int durability;
public:
    Item();
    ~Item();
};

class FECLONESHARED_EXPORT Weapon:public Item   //Weapon inherits from Item
{
    int damage;
public:
    Weapon();
};


//specific weapons inherit from Weapon
//Later, will implement Axe:Weapon, Sword:Weapon and Spear:Weapon types
class FECLONESHARED_EXPORT Basic_Sword:public Weapon
{
public:
    Basic_Sword();
};

class FECLONESHARED_EXPORT Basic_Spear:public Weapon
{
public:
    Basic_Spear();
};

class FECLONESHARED_EXPORT Basic_Axe:public Weapon
{
public:
    Basic_Axe();
};

class FECLONESHARED_EXPORT Potion:public Item
{
public:
    Potion();
};

//Effects
//Items have different Effect inheritors depending on what they're intended to do

class FECLONESHARED_EXPORT WeaponEffect:Effect  //category of effects that only belong to Weapons
{
public:
    WeaponEffect();
};


class FECLONESHARED_EXPORT OnHit:public WeaponEffect
{
public:
    OnHit();
};

//retores 10 hp to wielder on hit
class FECLONESHARED_EXPORT RestoreHPOnHit:public OnHit
{
public:
    RestoreHPOnHit();
    void effector();
};

//Buffs attack for units nearby
class FECLONESHARED_EXPORT AttackBuff:public WeaponEffect
{
public:
    AttackBuff();
    void effector();

};









#endif // FECLONE_H
