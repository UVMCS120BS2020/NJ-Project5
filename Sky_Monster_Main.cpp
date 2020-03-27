#include "Cloud_Monster.h"
#include "Comet_Monster.h"
#include <ctime>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

int get_int_input(string prompt, string invalid, int low, int high);

int main() {
    /*
     * TODO: Use polymorphism in a program of your choice, utilizing at least ten objects of the Cloud and Comet Monster classes.
     */

    vector<unique_ptr<Sky_Monster>> sky_Friends;
    srand(time(NULL));
    for(int i = 0; i < 10; ++i){
        int j = rand() % 2;
        if(j == 1)
            sky_Friends.push_back(make_unique<Cloud_Monster>());
        else
            sky_Friends.push_back(make_unique<Comet_Monster>());
    }

    cout << "Welcome to the Sky... be careful, there are monsters around here." << endl;

    for(auto &j : sky_Friends)
        cout << j->scare() << endl;

    int response = get_int_input("What would like to do? Enter 1 to feed the monsters or enter 2 to leave", "Not a valid choice. Enter 1, 2 or 3", 1, 2);

    while(response != 2){
        if (response == 1){
            cout << "They are growing!" << endl;
            for(auto &k : sky_Friends) {
                k->growth_spurt();
                cout << k->scare() << endl;
            }
        }
        response = get_int_input("What would like to do? Enter 1 to feed the monsters or enter 2 to leave", "Not a valid choice. Enter 1, 2 or 3", 1, 2);
    }

    cout << "You ran away... we hope to see you again soon!" << endl;

    return 0;
}

int get_int_input(string prompt, string invalid, int low, int high) {
    cout << prompt;
    int choice = 0;
    string junk;
    while (!(cin >> choice) || choice < low || choice > high) {
        cout << invalid;
        cin.clear();
        getline(cin, junk);
    }
    return choice;
}


