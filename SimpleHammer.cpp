//****************************************************************//
// Braden Mayew                                                   //
// CEN 4020                                                       //
// Sonia Haiduc                                                   //
// Assignment 1                                                   //
// --------------------- SimpleHammer.cpp ----------------------- //
//****************************************************************//

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
	double damage = 0.0;
    if (armor < 30) {
    	damage = hitPoints;
    	return damage;
    } else {
    	damage = hitPoints - armor;
    	if (damage < 0) {
    		return 0;
    	}
    	return damage;
    }
}