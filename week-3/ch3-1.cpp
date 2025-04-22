/* 
Programmer: Dominic Rios
Date: 4/22/25
Compiler: Clang
Purpose: To display knowledge with more mathematical operations
*/

#include <iostream>
using namespace std;

int main(){
    // Calculate monthly and yearly expenses of a user

    double housing_bill, phone_bill, internet_bill, cable_bill;
    cout<<"How much is your rent or mortgage payment?\n:";
    cin >> housing_bill;

    cout<<"How much is your phone bill?\n:";
    cin >> phone_bill;

    cout<<"How much is your internet bill?\n:";
    cin >> internet_bill;

    cout<<"How much are your cable expenses?\n:";
    cin >> cable_bill;


    float monthly_expenses = housing_bill + phone_bill + internet_bill + cable_bill;
    float yearly_expenses = 12 * monthly_expenses;

    cout<<"Your monthly expenses total to: $" << monthly_expenses <<"\n";
    cout<<"That is $"<<yearly_expenses<<" a year!\n";
}