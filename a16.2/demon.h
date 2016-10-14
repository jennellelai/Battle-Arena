//Jennelle Lai
//CS110B
//05/08/2015
//Professor Harden
//demon.h
//Assignment 16.2

#ifndef __a16_1__demon__
#define __a16_1__demon__

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "creature.h"
using namespace std;

/*
 
 The demon class represents an elf with the ability to inflict damage and receive damage
 
 demon();
 Precondition: A demon object is declared
 Postcondition: Initializes the demon's both strength and hitpoints to default: 10
 
 demon(int newStrength, int newHitpoints);
 Precondition: A demon object is declared
 Postcondition: Initializes the demon's strength to newStrength and hitpoints to newHitpoints
 
 int getDamage();
 Precondition: Calling object is a demon object
 Postcondition: Returns the damage done by demon
 
 string getSpecies();
 Precondition: Calling object is a demon object
 Postcondition: Returns the type of species of the demon
 
 
 */













class demon: public creature {
public:
    demon();
    demon(int newStrength, int newHitpoints);
    string getSpecies();
    int getDamage();
};

#endif /* defined(__a16_1__demon__) */
