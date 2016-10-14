//Jennelle Lai
//CS110B
//05/08/2015
//Professor Harden
//cyberdemon.cpp
//Assignment 16.2

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "cyberdemon.h"
#include "demon.h"

/*
 CLASS INVARIANT:
 
 All cyberdemon objects have strength and hitpoints values.
 */












cyberdemon::cyberdemon()
: demon()
{
}













cyberdemon::cyberdemon(int newStrength, int newHitpoints)
: demon(newStrength, newHitpoints)
{
}













string cyberdemon::getSpecies() {
    return "cyberdemon";
}