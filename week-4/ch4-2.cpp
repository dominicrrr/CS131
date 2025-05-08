/*
Programmer: Dominic Rios
Date: 5/2/25
Compiler: Clang
Purpose: Demonstrate knowledge with comparison operations and if statements.
*/

#include <iostream>
using namespace std;

// Constants
const float PENNY = 0.01;
const float NICKEL = 0.05;
const float DIME = 0.10;
const float QUARTER = 0.25;

int main () {
    // Goal, make a change counting game
    float total = 0.0;
    float input_value;

    cout<<"Try to get to 50 cents!\n";
    cout<<"Enter an amount of pennies:\n:";
    cin>>input_value;
    total += (input_value * PENNY);

    cout<<"Enter an amount of nickels:\n:";
    cin>>input_value;
    total += (input_value * NICKEL);

    cout<<"Enter an amount of dimes:\n:";
    cin>>input_value;
    total += (input_value * DIME);

    cout<<"Enter an amount of quarters:\n:";
    cin>>input_value;
    total += (input_value * QUARTER);

    if (total == 0.50) {
        cout << "Congrats you've reached 50 cents!\n";
    } else if (total < 0.50) {
        cout << "Your total was below 50 cents, try again\n";
    } else if (total > 0.50) {
        cout << "Your total was above 50 cents, try again\n";
    }
    

    return 0;
}