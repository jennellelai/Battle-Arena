//Jennelle Lai
//CS110B
//05/08/2015
//Professor Harden
//creature.cpp
//Assignment 16.2

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "creature.h"
using namespace std;

/*
 CLASS INVARIANT:
 
 Private data member variables, strength and hitpoints, stores the number of strength and the hitpoints value of the creature.
 
 All creature objects have strength and hitpoints values.
 */














creature::creature() {
    strength = 10;
    hitpoints = 10;
}















creature::creature(int newStrength, int newHitpoints) {
    strength = newStrength;
    hitpoints = newHitpoints;
}













string creature::getSpecies(){
    return "creature";
}













int creature::getDamage() {
    int damage;
    
    damage = (rand() % strength) + 1;
    
    cout << "The " << getSpecies() << " attacks for " << damage << " points!" << endl;

    return damage;
}















int creature::getStrength() {
    return strength;
}















int creature::getHitpoints() {
    return hitpoints;
}














void creature::setStrength(int newStrength) {
    strength = newStrength;
}













void creature::setHitpoints(int newHitpoints) {
    hitpoints = newHitpoints;
}