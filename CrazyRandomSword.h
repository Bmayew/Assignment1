//****************************************************************//
// Braden Mayew                                                   //
// CEN 4020                                                       //
// Sonia Haiduc                                                   //
// Assignment 1                                                   //
// -------------------- CrazyRandomSword.h ---------------------- //
//****************************************************************//

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a CrazyRandomSword. hitpoints = random integer number
 * between 7 and 100. Ignores a random amount of integer points, ranging from 2 - 1/3 of the armor
 * the weapon hits
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy Random Sword", 25.0) { //Calls Weapon(name, hitpoints) constructor with values Simple Hammer 25hp
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */

