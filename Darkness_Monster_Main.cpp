#include "Closet_Monster.h"
#include "Under_Bed_Monster.h"
#include <ctime>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

int get_int_input(string prompt, string invalid, int low, int high);

int main() {
    //
    //TOD Create a vector of Darkness Monster unique pointers and push a variety of ten Closet Monsters and Under Bed Monsters to it.
    vector<unique_ptr<Darkness_Monster>> darkness_Friends;
    srand(time(NULL));
    for(int i = 0; i < 10; ++i){
        int j = rand() % 2;
        if(j == 1)
            darkness_Friends.push_back(make_unique<Closet_Monster>());
        else
            darkness_Friends.push_back(make_unique<Under_Bed_Monster>());
    }
     // TOD Tell the user that there are monsters everywhere!
     cout << "Watch out! There are monsters everywhere!" << endl;
     // TOD Loop through the vector and call the scare method on each. Print the return values.
     // - This is polymorphism. Why? Answer in your README file.
     for(auto &k : darkness_Friends)
         cout << k->scare() << endl;
     //TOD Repeatedly give the user options to poke the eyes or run away.
     //     - If they poke the eyes, loop through the vector and call the poke_eye method on each.
     //         - This is NOT polymorphism. Why? Answer in your README file.
     //         - After poking all the eyes, loop through the vector again and output the scare methods again.
     //     - If they choose to run away, the program ends.
     while(get_int_input("Enter 1 to poke their eyes, or 2 to run away: ", "That is invalid. Choose 1 or 2: ", 1, 2) != 2){
         for(auto &k : darkness_Friends)
             k->poke_eye();
         for(auto &j : darkness_Friends)
             cout << j->scare() << endl;
     }
     cout << "You have run away!" << endl;
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
