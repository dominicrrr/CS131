/*
Programmer: Dominic Rios
Purpose: To display basic knowledge of C++
Date Modified: 3/31/25
Compiler Used: Clang
*/

#include <iostream>

// namespace
using namespace std;

// main program
int main(){
    double hours, rate, pay, weekly_pay;

    cout <<"How many hours did you work?"<< endl;
    cin >> hours;

    cout<<"What is hourly rate rate?"<<endl;
    cin >> rate;

    // calculate pay from rate * hours
    pay = rate * hours;
    cout<<"You have earned $"<< pay <<endl;

    // calculate weekly pay from previously entered rate and hours
    weekly_pay = rate * (hours * 7);
    cout<<"If you were to work those same "<<hours <<" hours for a week, you would gross $"<<weekly_pay<<endl;

    return 0;
}
