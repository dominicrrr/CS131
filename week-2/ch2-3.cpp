/*
Programmer: Dominic Rios
Purpose: To display basic knowledge of operations in C++
Date Modified: 4/3/25
Compiler Used: Clang
*/

#include <iostream>
using namespace std;

int main() {
    float avg_ocean_rise = 1.8;
    float mili_to_centi = 0.1;
    float centi_to_inch = 0.3937;

    float century = 100.0;

    float rise_in_centi = century * (mili_to_centi * avg_ocean_rise);
    float rise_in_inch = centi_to_inch * rise_in_centi;

    cout<<
        "Over the course of this past century, the oceans have risen "<<
            rise_in_centi <<" centimeters!\n";
    
    cout<<"That is " <<rise_in_inch << " inches!\n";

}