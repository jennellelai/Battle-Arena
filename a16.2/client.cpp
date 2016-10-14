//Jennelle Lai
//CS110B
//05/08/2015
//Professor Harden
//client.cpp
//Assignment 16.2

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "human.h"
#include "elf.h"
#include "demon.h"
#include "cyberdemon.h"
#include "balrog.h"
using namespace std;














void battleArena(creature &creature1, creature &creature2);













int main() {
    srand((time(0)));
    
    elf e(50,50);
    balrog b(50,50);
    
    battleArena(e, b);
    
    human h(50,50);
    cyberdemon c(50,50);
    
    battleArena(h,c);
    
    human h2(50,50);
    elf e2(50,50);
    
    battleArena(h2, e2);
    
    cyberdemon c2(50,50);
    balrog b2(50,50);
    
    battleArena(c2,b2);
}


void battleArena(creature &creature1, creature &creature2) {
    string c1Species = creature1.getSpecies();
    string c2Species = creature2.getSpecies();
    int c1Strength = creature1.getStrength();
    int c2Strength = creature2.getStrength();
    int c1Hitpoints = creature1.getHitpoints();
    int c2Hitpoints = creature2.getHitpoints();
    int c1Damage, c2Damage;
    
    cout << "This battle is between the " << c1Species << " and the " << c2Species << "!" << endl << endl;
    
    for (int i = 1; c1Hitpoints > 0 && c2Hitpoints > 0; i++) {
        cout << "Round " << i << ": " << endl;
        
        cout << "The " << c1Species << " has " << c1Strength << " strength and " << c1Hitpoints << " hitpoints!" << endl;
        
        cout << "The " << c2Species << " has " << c2Strength << " strength and " << c2Hitpoints << " hitpoints!" << endl;
        
        c1Damage = creature1.getDamage();
        c2Damage = creature2.getDamage();
        
        cout << "The " << c1Species << " has " << (c1Hitpoints -= c2Damage) << " hitpoints left!" << endl;
        
        cout << "The " << c2Species << " has " << (c2Hitpoints -= c1Damage) << " hitpoints left!" << endl;
    }
    
    if (c1Hitpoints <= 0 && c2Hitpoints > 0) {
        cout << "The " << c2Species << " has won the battle!\n" << endl;
    }
    else if (c1Hitpoints > 0 && c2Hitpoints <= 0) {
        cout << "The " << c1Species << " has won the battle!\n" << endl;
    }
    else {
        cout << "The " << c1Species << " and the " << c2Species << " are tied!\n" << endl;
    }
}











/*
 This battle is between the elf and the balrog!
 
 Round 1:
 The elf has 50 strength and 50 hitpoints!
 The balrog has 50 strength and 50 hitpoints!
 The elf attacks for 23 points!
 Magical attack inflicts 23 additional damage points!
 The balrog attacks for 25 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 45 additional damage points!
 The elf has -70 hitpoints left!
 The balrog has 4 hitpoints left!
 The balrog has won the battle!
 
 This battle is between the human and the cyberdemon!
 
 Round 1:
 The human has 50 strength and 50 hitpoints!
 The cyberdemon has 50 strength and 50 hitpoints!
 The human attacks for 10 points!
 The cyberdemon attacks for 8 points!
 The human has 42 hitpoints left!
 The cyberdemon has 40 hitpoints left!
 Round 2:
 The human has 50 strength and 42 hitpoints!
 The cyberdemon has 50 strength and 40 hitpoints!
 The human attacks for 23 points!
 The cyberdemon attacks for 40 points!
 The human has 2 hitpoints left!
 The cyberdemon has 17 hitpoints left!
 Round 3:
 The human has 50 strength and 2 hitpoints!
 The cyberdemon has 50 strength and 17 hitpoints!
 The human attacks for 22 points!
 The cyberdemon attacks for 40 points!
 Demonic attack inflicts 50 additional damage points!
 The human has -88 hitpoints left!
 The cyberdemon has -5 hitpoints left!
 The human and the cyberdemon are tied!
 
 This battle is between the human and the elf!
 
 Round 1:
 The human has 50 strength and 50 hitpoints!
 The elf has 50 strength and 50 hitpoints!
 The human attacks for 32 points!
 The elf attacks for 34 points!
 Magical attack inflicts 34 additional damage points!
 The human has -18 hitpoints left!
 The elf has 18 hitpoints left!
 The elf has won the battle!
 
 This battle is between the cyberdemon and the balrog!
 
 Round 1:
 The cyberdemon has 50 strength and 50 hitpoints!
 The balrog has 50 strength and 50 hitpoints!
 The cyberdemon attacks for 15 points!
 The balrog attacks for 33 points!
 Balrog speed attack inflicts 33 additional damage points!
 The cyberdemon has -16 hitpoints left!
 The balrog has 35 hitpoints left!
 The balrog has won the battle!

*/