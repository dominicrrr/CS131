/*
Programmer: Dominic Rios
Purpose: To display basic knowledge of operations in C++
Date Modified: 4/3/25
Compiler Used: Clang
*/

#include <iostream>

using namespace std;

int main(){ 
    // capacity in gallons
    int tank_capacity = 10;
    
    float avg_miles_per_gallon = 27.5;
    float avg_miles_per_gallon_highway = 32.5;

    cout<<"On average, a car with a full 10-gallon-tank can travel " <<avg_miles_per_gallon * tank_capacity<< " miles in the city."<<endl;
    cout<<"That same car can travel " <<avg_miles_per_gallon_highway * tank_capacity<< " miles on the highway with a full 10-gallon tank of gas"<<endl;
}