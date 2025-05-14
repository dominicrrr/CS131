/* 
Programmer: Dominic Rios
Date: 5/7/25
Compiler: Clang
Purpose: To show knowledge in logical operations
*/

#include <iostream>
using namespace std;

int main() {
    // Goal: take the input of a user and compute the sum of all the integers in that number
    bool choosing = true;
    int user_int;
    int user_sum = 0;

    cout<<"Please enter a positive integer.\n";
    while (choosing){
        cout<<":";
        cin>>user_int;

        // breaking out of our loop if user int is a positive number
        if (user_int > 0){
            choosing = false;
            break;
        }
        cout<<"Please enter a positive integer.\n";
    }

    // sum our number
    for (int i = 1; i<= user_int; i++){
        user_sum += i;
    }
    cout<<"The sum of all the integers in your number is: "<< user_sum << endl;
}