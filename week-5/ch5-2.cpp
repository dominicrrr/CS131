/* 
Programmer: Dominic Rios
Date: 5/7/25
Compiler: Clang
Purpose: To show knowledge with conditionals and loops
*/

#include <iostream>
using namespace std;

// Constant PI
const float PI = 3.14;

// Quick function to compute the area of a circle,
// Takes in the radius type int and spits out our area.
double circle_area(int radius){
    return PI * (radius * radius);
}

int main() {
    // goal: create a table of to show the relationship between a radius
    // and its area
    // initial header construction of the table.
    cout<<"Radius\tArea\n";
    cout<<"-------------\n";
    
    // We start with 1, our while loop will keep incrementing
    // our radius until 8.
    int radius = 1;
    while (radius <= 8){
        cout<<radius<<"\t"<<circle_area(radius)<<endl;
        radius *= 2;
    }
}