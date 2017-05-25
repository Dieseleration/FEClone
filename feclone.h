#ifndef FECLONE_H
#define FECLONE_H

#include "feclone_global.h"
#include "board.h"
#include "unit.h"


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
   // void runGame();
    void makeMove();
};



/*
class FECLONESHARED_EXPORT Weapon:public Item   //Weapon inherits from Item
{
    int damage;
    std::string wtype;
public:
    Weapon();
};


//specific weapons inherit from Weapon
//Later, will implement Axe:Weapon, Sword:Weapon and Spear:Weapon types
class Basic_Sword:public Weapon
{
public:
    Basic_Sword();
};

class Basic_Spear:public Weapon
{
public:
    Basic_Spear();
};

class Basic_Axe:public Weapon
{
public:
    Basic_Axe();
};

class Potion:public Item
{
public:
    Potion();
};

//Effects
//Items have different Effect inheritors depending on what they're intended to do

class WeaponEffect:Effect  //category of effects that only belong to Weapons
{
public:
    WeaponEffect();
};


class OnHit:public WeaponEffect
{
public:
    OnHit();
};

//retores 10 hp to wielder on hit
class RestoreHPOnHit:public OnHit
{
public:
    RestoreHPOnHit();
    void effector();
};

//Buffs attack for units nearby
class AttackBuff:public WeaponEffect
{
public:
    AttackBuff();
    void effector();

};
*/








#endif // FECLONE_H
