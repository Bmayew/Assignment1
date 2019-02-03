//****************************************************************//
// Braden Mayew                                                   //
// CEN 4020                                                       //
// Sonia Haiduc                                                   //
// Assignment 1                                                   //
// ------------------- CrazyRandomSword.cpp --------------------- //
//****************************************************************//

/* 
 * File:   CommonSpear.cpp
 * Author: Javier <jrescobara@gmail.com>
 * 
 * Created on September 27, 2017, 4:15 PM
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
    hitpoints = rand() % 100 + 7; // random number between 7 and 100
    armor = rand() % (armor / 3) + 2; // random number between 2 and 1/3 of the armor
	double damage = hitPoints - armor;
    if(damage < 0){
        return 0;
    }
    return damage;
}