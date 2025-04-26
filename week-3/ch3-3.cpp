/* 
Programmer: Dominic Rios
Date: 4/22/25
Compiler: Clang
Purpose: To display knowledge with more mathematical operations
*/

#include <iostream>
using namespace std;

int main(){
    // Goal: Calculate the calories someone may eat from number of crackers
    float num_of_crackers_per_box = 40;
    float servings_per_box = 10;
    float calories_per_serving = 10;

    float calories_per_cracker = (calories_per_serving * servings_per_box)/ num_of_crackers_per_box;

    float user_crackers = 0;

    cout <<"How many crackers have you eaten?\n:";
    cin >> user_crackers;

    cout<<"Those " <<user_crackers << " crackers you ate added up to " << user_crackers * calories_per_cracker
        <<" calories!\n";

    return 0;
}