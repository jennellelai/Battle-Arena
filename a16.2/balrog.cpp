//Jennelle Lai
//CS110B
//05/08/2015
//Professor Harden
//balrog.cpp
//Assignment 16.2

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "balrog.h"
#include "demon.h"

/*
 CLASS INVARIANT:
 
 All balrog objects have strength and hitpoints values.
 */













balrog::balrog()
: demon()
{
}
















balrog::balrog(int newStrength, int newHitpoints)
: demon(newStrength, newHitpoints)
{
}















int balrog::getDamage() {
    
    int damage = demon::getDamage();
    
    int damage2 = (rand() % getStrength()) + 1;
    cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
    damage += damage2;
    
    return damage;
}

















string balrog::getSpecies() {
    return "balrog";
}