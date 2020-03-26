//
// Created by barca on 3/25/2020.
//
#include "Sky_Monster.h"
#include <iostream>

Sky_Monster::Sky_Monster() {
    number_of_wings = rand() % (MAX_NUMBER_WINGS - 1) + 2;
    while(number_of_wings % 2 != 0)
        number_of_wings = rand() % (MAX_NUMBER_WINGS - 1) + 2;
}

Sky_Monster::Sky_Monster(int now) {
    set_number_of_wings(now);
}

int Sky_Monster::get_number_of_wings() {
    return number_of_wings;
}

void Sky_Monster::set_number_of_wings(int num) {
    if (num > 0 && num % 2 == 0)
        number_of_wings = num;
    else
        number_of_wings = MAX_NUMBER_WINGS;
}

void Sky_Monster::growth_spurt() {
    if(number_of_wings <= MAX_NUMBER_WINGS-2)
        number_of_wings += 2;
}

