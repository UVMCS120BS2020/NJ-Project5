//
// Created by barca on 3/25/2020.
//

#ifndef PROJECT5ALTERNATE_SKY_MONSTER_H
#define PROJECT5ALTERNATE_SKY_MONSTER_H

#include <string>

class Sky_Monster {
public:
    //Constructor
    Sky_Monster();

    virtual ~Sky_Monster() = default;

    explicit Sky_Monster(int now);

    int get_number_of_wings();

    void set_number_of_wings(int num);

    //plus two wings
    void growth_spurt();

    virtual std::string scare() = 0;

    static const int MAX_NUMBER_WINGS = 101;
protected:
    int number_of_wings;
};

#endif //PROJECT5ALTERNATE_SKY_MONSTER_H
