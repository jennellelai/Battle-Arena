//Jennelle Lai
//CS110B
//05/08/2015
//Professor Harden
//cyberdemon.h
//Assignment 16.2

#ifndef __a16_1__cyberdemon__
#define __a16_1__cyberdemon__

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "demon.h"
using namespace std;

/*
 
 The cyberdemon class represents a cyberdemon with the ability to inflict damage and receive damage
 
 cyberdemon();
 Precondition: A cyberdemon object is declared
 Postcondition: Initializes the elf's both strength and hitpoints to default: 10
 
 cyberdemon(int newStrength, int newHitpoints);
 Precondition: A cyberdemon object is declared
 Postcondition: Initializes the cyberdemon's strength to newStrength and hitpoints to newHitpoints
 
 string getSpecies();
 Precondition: Calling object is a cyberdemon object
 Postcondition: Returns the type of species of the cyberdemon
 
 
 */













class cyberdemon: public demon{
public:
    cyberdemon();
    cyberdemon(int newStrength, int newHitpoints);
    string getSpecies();
};

#endif /* defined(__a16_1__cyberdemon__) */
