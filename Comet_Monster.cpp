#include "Comet_Monster.h"
using namespace std;

Comet_Monster::Comet_Monster() : Sky_Monster() {
}

Comet_Monster::Comet_Monster(int now) : Sky_Monster(now) {
}

string Comet_Monster::scare() {
    if (rand() % 2 == 0) {
        return "I am barreling down at you";
    }
    return "There are " + to_string(number_of_wings) + " wings encompassing you";
}