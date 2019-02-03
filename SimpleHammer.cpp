//****************************************************************//
// Braden Mayew                                                   //
// CEN 4020                                                       //
// Sonia Haiduc                                                   //
// Assignment 1                                                   //
// --------------------- SimpleHammer.cpp ----------------------- //
//****************************************************************//

/* 
 * File:   CommonSpear.cpp
 * Author: Javier <jrescobara@gmail.com>
 * 
 * Created on September 27, 2017, 4:15 PM
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
	double damage = 0.0;
    if (armor < 30) {
    	damage = hitPoints;
    	if (damage < 0) {
    		return 0;
    	}
    	return damage;
    } else {
    	damage = hitPoints - armor;
    	if (damage < 0) {
    		return 0;
    	}
    	return damage;
    }
}