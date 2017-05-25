#ifndef UNIT_H
#define UNIT_H

class Unit
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


//unit can only exist inside of a unit
class Item
{
    int effector;                    //particular Effect inheritor class defined in further items
    std::string name;
    int durability;
public:
    Item();
    ~Item();
};

#endif // UNIT_H

