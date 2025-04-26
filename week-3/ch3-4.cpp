/* 
Programmer: Dominic Rios
Date: 4/22/25
Compiler: Clang
Purpose: To display knowledge with more mathematical operations
*/


#include <iostream>
#include <cmath>
using namespace std;


// function to calculate the area of a pizza
double area_of_circle(double radius){
    const float PI = 3.14;
    return PI * (radius * radius);
}

// function to calculate num of slices for given area of pizza
int slice_calculator(double area_of_pizza){
    const double SLICE_AREA = 12.789;
    return floor(area_of_pizza / SLICE_AREA);
}

int main (){
    // Goal: find the area of a pizza given a user's pizza diameter inches,
    // and display number of slices a user could cut it into given the minimum 
    //12.789 sq inches per slice

    double pizza_diameter;
    
    cout <<"In inches, how wide is your pizza?\n:";
    cin >> pizza_diameter;

    cout <<
        "With your pizza, you could cut it into " 
        << slice_calculator(area_of_circle(pizza_diameter/2))
        << " slices!\n";
    return 0;
}