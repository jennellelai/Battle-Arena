//Jennelle Lai
//CS110B
//05/08/2015
//Professor Harden
//demon.cpp
//Assignment 16.2

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "demon.h"
#include "creature.h"

/*
 CLASS INVARIANT:
 
 All demon objects have strength and hitpoints values.
 */












demon::demon()
: creature()
{
}













demon::demon(int newStrength, int newHitpoints)
: creature(newStrength, newHitpoints)
{
}














int demon::getDamage() {
    // Demons can inflict damage of 50 with a 25% chance
    int damage = creature::getDamage();

    if (rand() % 4 == 0) {
        damage = damage + 50;
        cout << "Demonic attack inflicts 50 additional damage points!" << endl;
    }
    
    return damage;
}














string demon::getSpecies() {
    return "demon";
}