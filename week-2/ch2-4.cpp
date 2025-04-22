/*
Programmer: Dominic Rios
Purpose: To display basic knowledge of operations in C++
Date Modified: 4/3/25
Compiler Used: Clang
*/

#include <iostream>

using namespace std;

// main function
int main(){
    // Goal: see how many gallons of paint is required to 
    // to coat a 6x100 fence twice.

    // measured in square feet, 340 per gallon 
    float paint_per_gallon = 340.0;
    
    // measurements in feet
    float fence_length = 100.0;
    float fence_height = 6.0;

    // compute how much gallons for one coat on both sides
    float fence_surface_area = fence_height * fence_length;
    float one_coat_both_sides = 2 * (fence_surface_area / paint_per_gallon);

    // compute the total amount of gallons needed to coat both sides twice
    float two_coats = 2 * one_coat_both_sides;

    cout<<"To coat a fence "<<fence_length<<" feet in length"
        <<"and "<<fence_height<<" feet tall twice,\n"
        <<"You would need " <<two_coats<<" gallons of paint!"
        <<"\n";

    cout << 5%2 << endl;
    return 0;
}   