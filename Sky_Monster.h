//
// Created by barca on 3/25/2020.
//

#ifndef PROJECT5ALTERNATE_SKY_MONSTER_H
#define PROJECT5ALTERNATE_SKY_MONSTER_H

#include <string>

class Sky_Monster {
public:
    /**
     * Requires: nothing
     * Modifies: number_of_wings
     * Effects: sets number_of_wings to a random int in the range 2-101
     */
    Sky_Monster();

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: does nothing
     */
    virtual ~Sky_Monster() = default;

    /**
     * Requires: nothing
     * Modifies: number_people_eaten 
     * Effects: calls set_number_of_wings with parameter now
     */
    explicit Sky_Monster(int now);

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns number_of_wings
     */
    int get_number_of_wings();

    /**
     * Requires: nothing
     * Modifies: number_of_wings
     * Effects: sets number_of_wings to num if num is greater than 0 and even.
     * If not, the number_of_wings is just set to the maximum number of wings
     */
    void set_number_of_wings(int num);

    /**
     * Requires: nothing
     * Modifies: number_of_wings
     * Effects: increments number_of_wings by 2 if not already at 100
     */
    void growth_spurt();

    //virtual method that returns a scary message
    virtual std::string scare() = 0;

    static const int MAX_NUMBER_WINGS = 101;
protected:
    int number_of_wings;
};

#endif //PROJECT5ALTERNATE_SKY_MONSTER_H
