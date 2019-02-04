//****************************************************************//
// Braden Mayew                                                   //
// CEN 4020                                                       //
// Sonia Haiduc                                                   //
// Assignment 1                                                   //
// ----------------------- SuperSword.h ------------------------- //
//****************************************************************//

#include <string>
#include <cstdlib>
#include "Weapon.h"

#ifndef SUPERSWORD_H
#define SUPERSWORD_H

/**
 * Defines the behavior of a SuperSword. 50 hitpoints. If the armor is greater than 25, 
 * then 60 percent of the armor is ignored
 */
class SuperSword : public Weapon {
public:
    SuperSword() : Weapon("SuperSword", 20) { //Calls Weapon(name, hitpoints) constructor with values Simple Hammer 25hp
    }

    virtual ~SuperSword() {};

    virtual double hit(double armor);



};

#endif /* SUPERSWORD_H */