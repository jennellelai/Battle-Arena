//Jennelle Lai
//CS110B
//05/08/2015
//Professor Harden
//elf.h
//Assignment 16.2

#ifndef __a16_1__elf__
#define __a16_1__elf__

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "creature.h"
using namespace std;

/*
 
 The elf class represents an elf with the ability to inflict damage and receive damage
 
 elf();
 Precondition: An elf object is declared
 Postcondition: Initializes the elf's both strength and hitpoints to default: 10
 
 elf(int newStrength, int newHitpoints);
 Precondition: An elf object is declared
 Postcondition: Initializes the elf's strength to newStrength and hitpoints to newHitpoints
 
 int getDamage();
 Precondition: Calling object is an elf object
 Postcondition: Returns the damage done by elf
 
 string getSpecies();
 Precondition: Calling object is an elf object
 Postcondition: Returns the type of species of the elf
 
 
 */












class elf: public creature {
public:
    elf();
    elf(int newStrength, int newHitpoints);
    int getDamage();
    string getSpecies();
};

#endif /* defined(__a16_1__elf__) */
