/*
Programmer: Dominic Rios
Date: 5/2/25
Compiler: Clang
Purpose: Demonstrate knowledge with comparison operations and if statements.
*/

#include <iostream>
using namespace std;

int main() {
    int user_year = 0;
    cout << "Choose a year too determine if it is a leap year, or when the next leap year will happen.\n:";
    cin>> user_year;

    if (user_year % 400 == 0 || user_year % 4 == 0){
        cout<<"Your year "<<user_year<<" is a leap year\n";
    } else {
        cout <<"Your year is not a leap year.\n";
        bool counting = true;
        while(counting){
            user_year++;
            if (user_year % 400 == 0 || (user_year % 4 == 0 && user_year % 100 != 0)) {
                cout << "The next leap year after your number is " << user_year << ".\n";
                counting = false;
        }
    }
    }
    return 0;

}