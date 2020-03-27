#include "Cloud_Monster.h"
using namespace std;

Cloud_Monster::Cloud_Monster() : Sky_Monster(), raining(true) {
}

Cloud_Monster::Cloud_Monster(int now) : Sky_Monster(now), raining(true) {
}

bool Cloud_Monster::stop_the_rain() {
    if (!raining) {
        return false;
    }
    raining = false;
    return true;
}

bool Cloud_Monster::is_raining() const {
    return raining;
}

string Cloud_Monster::scare() {
    if (raining) {
        return "There is a torrential downpour";
    }
    raining = true;
    return "I recede back into the storm";
}
