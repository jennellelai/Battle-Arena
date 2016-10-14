//Jennelle Lai
//CS110B
//05/08/2015
//Professor Harden
//human.cpp
//Assignment 16.2

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "human.h"
#include "creature.h"
using namespace std;

/*
 CLASS INVARIANT:
 
 All human objects have strength and hitpoints values.
 */













human::human()
: creature()
{
}

















human::human(int newStrength, int newHitpoints)
: creature(newStrength, newHitpoints)
{
}














string human::getSpecies() {
    return "human";
}