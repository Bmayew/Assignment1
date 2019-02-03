//****************************************************************//
// Braden Mayew                                                   //
// CEN 4020                                                       //
// Sonia Haiduc                                                   //
// Assignment 1                                                   //
// ------------------- CrazyRandomSword.cpp --------------------- //
//****************************************************************//

#include <iostream>
#include <cstdlib>
#include <math.h>
#include "CrazyRandomSword.h"
using namespace std;

double CrazyRandomSword::hit(double armor) {
    srand(time(NULL));
    int range1 = 100 - 7 + 1; 
    int hp = rand() % range1 + 7;
    //cout << "\nhitpoints: " << hp << endl;
    
    int thirdOfArmor = floor (armor/3.0);
    //cout << "1/3 of armor: " << thirdOfArmor << endl;
    int range2 = thirdOfArmor - 2 + 1; 
    double tempNum = rand() % range2 + 2;
    //cout << "random range: " << tempNum << endl;
    sethitPoints(hp);
    //cout << "hp: " << tempNum << endl;
	double damage = hp - tempNum;
    if(damage < 0){
        return 0;
    }


    return damage;
}