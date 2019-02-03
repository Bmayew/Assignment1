//****************************************************************//
// Braden Mayew                                                   //
// CEN 4020                                                       //
// Sonia Haiduc                                                   //
// Assignment 1                                                   //
// ------------------- CrazyRandomSword.cpp --------------------- //
//****************************************************************//


#include <cstdlib>
#include <math.h>
#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
    int number = floor (armor/3.0);
    hitPoints = rand() % 100 + 7; // random number between 7 and 100
    armor = rand() % number + 2; // random number between 2 and 1/3 of the armor
	double damage = hitPoints - armor;
    if(damage < 0){
        return 0;
    }
    return damage;
}