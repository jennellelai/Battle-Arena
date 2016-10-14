//Jennelle Lai
//CS110B
//05/08/2015
//Professor Harden
//human.h
//Assignment 16.2

#ifndef __a16_1__human__
#define __a16_1__human__

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "creature.h"
using namespace std;

/*
 
 The human class represents a human with the ability to inflict damage and receive damage
 
 human();
 Precondition: A human object is declared
 Postcondition: Initializes the human's both strength and hitpoints to default: 10
 
 human(int newStrength, int newHitpoints);
 Precondition: A human object is declared
 Postcondition: Initializes the human's strength to newStrength and hitpoints to newHitpoints
 
 string getSpecies();
 Precondition: Calling object is a human object
 Postcondition: Returns the type of species of the human
 
 
 */













class human: public creature {
public:
    human();
    human(int newStrength, int newHitpoints);
    string getSpecies();
};

#endif /* defined(__a16_1__human__) */
