/* 
Programmer: Dominic Rios
Date: 4/22/25
Compiler: Clang
Purpose: To display knowledge with more mathematical operations
*/


#include <iostream>
#include <cmath>
using namespace std;


int area_of_circle(double radius){
    float pi = 3.14;
    return pi * (radius * radius);
}

int slice_calculator(double area_of_pizza){
    double slice_area = 12.789;
    return floor(area_of_pizza / slice_area);
}

int main (){
    double pizza_diameter;
    
    cout <<"In inches, how wide is your pizza\n:";
    cin >> pizza_diameter;

    cout <<
        "With your pizza, you could cut it into " 
        << slice_calculator(area_of_circle(pizza_diameter/2))
        << " slices!\n";
    return 0;
}