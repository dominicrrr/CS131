/*
Programmer: Dominic Rios
Date: 4/22/25
Compiler: Clang
Purpose: Demonstrate knowledge with comparison operations and if statements.
*/

#include <iostream>
#include <map>
using namespace std;

int main () {

    map<int, string> roman_int_map;
    roman_int_map[1] = "I";
    roman_int_map[5] = "V";
    roman_int_map[10] = "X";

    int user_number=0;
    bool choosing = true;
    while (choosing) {
        cout<<"Please choose an integer between 2 and 11.\n:";
        cin >> user_number;


        // checking if our number is in between 2 and 11
        if (2 < user_number && user_number < 11) {
        // calculate the roman numeral from our number
        // building the roman numeral...
        string roman = "";

        if (roman_int_map.count(user_number)) {
            roman = roman_int_map[user_number];
        } else if (user_number < 4) {
            roman = string(user_number, 'I'); 
        } else if (user_number == 4) {
            roman = "IV";
        } else if (user_number > 5 && user_number < 9) {
            roman = "V" + string(user_number - 5, 'I');
        } else if (user_number == 9) {
            roman = "IX";
        } else if (user_number == 11) {
            roman = "XI"; 
        }
        cout<<"Your roman numeral representation is: "<< roman <<"\n";
        break;
        } 
        cout<<"You've entered a number outside the range of 2 and 11.\n\n";
    }

    return 0;
}