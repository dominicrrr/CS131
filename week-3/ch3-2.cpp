/* 
Programmer: Dominic Rios
Date: 4/22/25
Compiler: Clang
Purpose: To display knowledge with more mathematical operations
*/

#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main(){
    // Goal: Calculate the average of 5 test scores
    double test_score_total = 0;

    // Ordinal suffix map
    map<int, string> ordinal_suffix_map;
    ordinal_suffix_map[1] = "st";
    ordinal_suffix_map[2] = "nd";
    ordinal_suffix_map[3] = "rd";
    // all other numbers will end with a "th"


    double scores[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i<5; i++){
        float test_score = 0;

        cout<<"Please input your "<< i + 1<<
            // If our score number is in the map as a key, we assign it's ordinal suffix
            // if else, we use a "th"
            (ordinal_suffix_map.find(i + 1) != ordinal_suffix_map.end() ? 
            ordinal_suffix_map[i+1]: "th")
            << " score\n->";
        cin >> test_score;
        
        // Save our test score within the array
        scores[i] = test_score;
        test_score_total += test_score;
    }

    // Calculate the mean/average of the scores, then round to 1 decimal point
    cout << fixed << setprecision(1);
    cout<<"The average score of your 5 tests was " 
    << test_score_total / 5 <<"\n";
    return 0;
}