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

    // initialize an array to hold our scores
    double scores[5];

    // variable to hold the sum of scores as we iterate through,
    // so we dont have to iterate through the array again to add
    // up the score
    double test_score_total = 0;

    // Ordinal suffix map
    map<int, string> ordinal_suffix_map;
    ordinal_suffix_map[1] = "st";
    ordinal_suffix_map[2] = "nd";
    ordinal_suffix_map[3] = "rd";
    // all other numbers will end with a "th"

    // iterate through the array, prompt the user for their test score,
    // save their score into the array via the index
    for (int i = 0; i<5; i++){
        float test_score = 0;

        cout<<"Please input your "<< i + 1<<
            // If our score number is in the map as a key, we assign it's ordinal suffix
            // if else, we use a "th"
            (ordinal_suffix_map.find(i + 1) != ordinal_suffix_map.end() ? 
            ordinal_suffix_map[i+1]: "th")
            << " score\n->";
        cin >> test_score;
        
        // Save our test score within our place in the array
        scores[i] = test_score;
        test_score_total += test_score;
    }

    // Calculate the mean/average of the scores, then round to 1 decimal point
    cout << fixed << setprecision(1);
    cout<<"The average score of your 5 tests were " 
    << test_score_total / 5 <<"\n";
    return 0;
}
