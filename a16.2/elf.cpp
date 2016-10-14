//Jennelle Lai
//CS110B
//05/08/2015
//Professor Harden
//elf.cpp
//Assignment 16.2

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "elf.h"
#include "creature.h"

/*
 CLASS INVARIANT:
 
 All elf objects have strength and hitpoints values.
 */












elf::elf()
: creature()
{
}












elf::elf(int newStrength, int newHitpoints)
: creature(newStrength, newHitpoints)
{
}













int elf::getDamage() {
    int damage = creature::getDamage();
    
    if ((rand() % 2) == 0) {
        cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
        damage *= 2;
    }
    
    return damage;
}













string elf::getSpecies() {
    return "elf";
}