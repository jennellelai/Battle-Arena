//Jennelle Lai
//CS110B
//05/08/2015
//Professor Harden
//balrog.h
//Assignment 16.2

#ifndef __a16_1__balrog__
#define __a16_1__balrog__

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "demon.h"
using namespace std;

/*
 
 The balrog class represents a balrog with the ability to inflict damage and receive damage
 
 balrog();
 Precondition: A balrog object is declared
 Postcondition: Initializes the balrog's both strength and hitpoints to default: 10
 
 balrog(int newStrength, int newHitpoints);
 Precondition: A balrog object is declared
 Postcondition: Initializes the balrog's strength to newStrength and hitpoints to newHitpoints
 
 int getDamage();
 Precondition: Calling object is a balrog object
 Postcondition: Returns the damage done by balrog
 
 string getSpecies();
 Precondition: Calling object is a balrog object
 Postcondition: Returns the type of species of the balrog
 
 
 */













class balrog: public demon{
public:
    balrog();
    balrog(int newStrength, int newHitpoints);
    int getDamage();
    string getSpecies();
};

#endif /* defined(__a16_1__balrog__) */
