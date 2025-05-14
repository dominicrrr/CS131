/* 
Programmer: Dominic Rios
Date: 5/7/25
Compiler: Clang
Purpose: To show knowledge with conditionals and loops
*/

#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

const int SUITES = 120;

int main() {
    // suffix map for fun
    map<int, string> ordinal_suffix_map;
    ordinal_suffix_map[1] = "st";
    ordinal_suffix_map[2] = "nd";
    ordinal_suffix_map[3] = "rd";

    vector<int> floor_occupancy;

    int floor = 10;
    while (floor <= 16){
        // immediately skip the 13th floor
        if (floor==13){
            floor ++;
            continue;
        }
        
        // rest of the loop body
        int user_input;
        cout<<"How many occupants are in the "<<floor<<
            (
                // If the last digit of our number is inside the ordinal suffix map,
                // we use it's prefix. if else, we use the 'th' prefix.
                ordinal_suffix_map.find(floor % 10) != ordinal_suffix_map.end() ? 
                ordinal_suffix_map[floor % 10] : "th"
            )
            <<" floor? (0-20 occupants)\n:";
        cin>>user_input;
        
        // if we are in the appropriate range for occupancy
        if (user_input <= 20 && user_input >= 0){
            floor_occupancy.push_back(user_input);
            floor++;
        } else {
            cout<<"Please enter a valid integer from 0 to 20\n";
        }
    }

    // calculate everything we need now
    int total_occupants=0;
    for (int i = 0; i<floor_occupancy.size(); i++){
        total_occupants+=floor_occupancy[i];
    }

    // rounding to two decimals
    double percentage_occupied = round((static_cast<double>(total_occupants) / SUITES) * 100.0);
    // calculate the how many suites the hotel has, and the percentage of them occupied
    cout<<"\n_____Hotel_Summary_____\n";
    cout<<"Total Suites:\t\t"<<SUITES<<endl;
    cout<<"Suites Occupied:\t"<<total_occupants<<endl;
    cout<<"Percentage Occupied:\t"<<percentage_occupied<<"%\n";
    return 0;
}