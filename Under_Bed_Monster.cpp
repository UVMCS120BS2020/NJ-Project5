#include "Under_Bed_Monster.h"
using namespace std;

Under_Bed_Monster::Under_Bed_Monster() : Darkness_Monster() {
}

Under_Bed_Monster::Under_Bed_Monster(int noe) : Darkness_Monster(noe) {
}

// TODO: implement the scare method here
string Under_Bed_Monster::scare() {
    return "Monster is looking at you with " + to_string(number_of_eyes) + " eyes from under your bed!";
}