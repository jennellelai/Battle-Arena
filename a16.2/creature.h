//Jennelle Lai
//CS110B
//05/08/2015
//Professor Harden
//creature.h
//Assignment 16.2

#ifndef __a16_1__creature__
#define __a16_1__creature__

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

/*
 
 The creature class represents a creature with the ability to inflict damage and receive damage
 
 creature();
 Precondition: A creature object is declared
 Postcondition: Initializes the creature's both strength and hitpoints to default: 10
 
 creature(int newStrength, int newHitpoints);
 Precondition: A creature object is declared
 Postcondition: Initializes the creature's strength to newStrength and hitpoints to newHitpoints
 
 virtual int getDamage();
 Precondition: Calling object is a creature object
 Postcondition: Returns the damage done by creature
 
 virtual string getSpecies() = 0;
 Precondition: Calling object is a creature object
 Postcondition: Returns the type of species of the creature
 
 int getStrength();
 Precondition: Calling object is a creature object
 Postcondition: Returns the strength of the creature
 
 int getHitpoints();
 Precondition: Calling object is a creature object
 Postcondition: Returns the hitpoints of the creature
 
 void setStrength(int newStrength);
 Precondition: Calling object is a creature object
 Postcondition: Sets the strength of the creature to newStrength
 
 void setHitpoints(int newHitpoints);
 Precondition: Calling object is a creature object
 Postcondition: Sets the hitpoints of the creature to newHitpoints
 
 
 
 */












class creature {
private:
    int strength;
    int hitpoints;

public:
    creature();
    creature(int newStrength, int newHitpoints);
    virtual int getDamage();
    virtual string getSpecies() = 0;
    int getStrength();
    int getHitpoints();
    void setStrength(int newStrength);
    void setHitpoints(int newHitpoints);
};



#endif /* defined(__a16_1__creature__) */
