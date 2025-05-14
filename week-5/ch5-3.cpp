/* 
Programmer: Dominic Rios
Date: 5/7/25
Compiler: Clang
Purpose: To show knowledge with conditionals and loops
*/

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Goal: create a number guessing game
    bool choosing = true;
    // Ensure everytime the program is ran, a new number would generate
    srand(time(0));
    
    // generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;

    while (choosing){
        int guess;
        cout<<"Please select a number between 1 and 100.\n:";
        cin>>guess;

        // base case.
        if (guess == random_number){
            cout<<"Congrats, you've guessed the number!\n";
            break;
        }

        // I want to implement a hotter/colder system for a user's guess
        if (0 < guess && guess < 100){
            // if we are in the proper range...
            // we can now check how hot / cold we are
            if (random_number-5 < guess && guess < random_number + 5){
                cout<<"HOlY SMOKES WE ARE REALLY CLOSE.\n";

            } else if (random_number - 15 < guess && guess < random_number + 15){
                cout<<"Okay, we are getting there...\n";
            
            } else {
                cout<<"We're a little off...\n";
            }
        }
    }
    return 0;
}