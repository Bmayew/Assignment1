//****************************************************************//
// Braden Mayew                                                   //
// CEN 4020                                                       //
// Sonia Haiduc                                                   //
// Assignment 1                                                   //
// ----------------------- SuperSword.cpp ----------------------- //
//****************************************************************//

#include <iostream>
#include <cstdlib>
#include <math.h>
#include "SuperSword.h"
using namespace std;

double SuperSword::hit(double armor) {
    double damage =0.0;
    // if the armor is greater than 25, ignores 60 percent of the armor points
    if (armor > 25) {
	   damage = hitPoints - (armor * .4);
       if (damage < 0){
            return 0;
       }
    } else {
        damage = hitPoints - armor;
        if (damage < 0) {
            return 0;
        }
    }
    return damage;
}