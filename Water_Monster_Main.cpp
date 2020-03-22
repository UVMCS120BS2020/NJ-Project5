#include "Lake_Monster.h"
#include "Sea_Monster.h"
#include <ctime>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

int get_int_input(string prompt, string invalid, int low, int high);
void monster_mode();
void player_mode();

int main() {
    int choice = get_int_input("Enter 1 to play as a water monster or 2 to play as a person: ",
                             "Invalid choice. Enter 1 or 2: ",
                             1,
                             2);

    if (choice == 1) {
        cout << "You monster!" << endl;
        monster_mode();
    } else {
        cout << "Get ready to face the water monsters!" << endl;
        player_mode();
    }
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

void monster_mode() {
    Lake_Monster champ(0);
    // TOD Print welcome message that includes the name Champ the Lake Monster
    cout << "Welcome to Lake Champlain, home of the mighty lake monster, Champ!" << endl;
    // TOD Create vector of unique pointers to Water Monsters called friends
    vector<unique_ptr<Water_Monster>> friends;
    // TOD Populate vector with 10 monsters, choosing Lake vs Sea randomly
    srand(time(NULL));
    for(int i = 0; i < 10; ++i){
        int j = rand() % 2;
        if(j == 1)
            friends.push_back(make_unique<Lake_Monster>());
        else
            friends.push_back(make_unique<Sea_Monster>());
    }
    // TOD Call get_int_input to prompt the user to choose 1 for meal time, 2 for scare time, or 3 to exit.
    int response = get_int_input("Choose 1 for meal time, 2 for scare time, or 3 to exit: ", "That is an invalid choice, choose 1, 2 or 3: ", 1, 3);
    // TOD Create a loop that runs until the user chooses option 3:
    //      - If 1 is chosen, loop through populated vector and call eat_person on each.
    // TOD         - This is NOT an example of polymorphism. Why? Answer in your README file.
    //      - If 2 is chosen, print message saying "This is how my friends scare:"
    //          - Loop through populated vector and call scare method on each pointer, printing return value to console
    // TOD          - This IS an example of polymorphism. Why? Answer in your README file.
    //          - Print message saying how Champ scares, then call and print scare method on champ.
    //      - Call get_int_input again with the same options as before.
    while(response != 3){
        if(response == 1){
            for(auto &k : friends)
                k->eat_person();
        } else{
            cout << "This is how my friends scare:" << endl;
            for(auto &k: friends)
                cout << k->scare() << endl;
            cout << "Now this is how Champ scares:" << endl;
            cout << champ.scare() << endl;
        }
        response = get_int_input("Choose 1 for meal time, 2 for scare time, or 3 to exit", "That is an invalid choice, choose 1, 2 or 3: ", 1, 3);
    }
}

void player_mode() {
    vector<unique_ptr<Water_Monster>> monsters;
    srand(time(NULL));
    for (int i = 0; i < 10; ++i) {
        if (rand() % 2) {
            monsters.push_back(make_unique<Lake_Monster>());
        } else {
            monsters.push_back(make_unique<Sea_Monster>());
        }
    }
    int index = get_int_input("Enter a number from 0 to " + to_string(monsters.size()-1) + ": ",
                            "Invalid input. Try again: ",
                            0,
                            monsters.size()-1);
    cout << "The monster approaches: " << monsters[index]->scare() << endl;
    int choice = get_int_input("Choose a number between 1 and 3: ",
                             "Invalid input. Pick a number from 1 to 3: ",
                             1,
                             3);
    if (rand() % 3 + 1 == choice) {
        cout << "You were lucky and beat the monster!" << endl;
        monsters.erase(monsters.begin() + index);
    } else {
        cout << "The monster ate you!" << endl;
        monsters[index]->eat_person();
    }
}