/*
Programmer: Dominic Rios
Date: 5/2/25
Compiler: Clang
Purpose: Demonstrate knowledge with comparison operations and if statements.
*/

#include <iostream>
#include <map>
#include <tuple>
#include <set>
#include <cctype>
using namespace std;

/*
thining...
list of selectable colors: red, blue, yellow

map:
    {yellow, blue} : green,
    {blue, red} : purple,
    {blue, yellow}: 

*/

// function to lower the string of an inputted color if the user happens to capitalize a character
string lower_string(string word){
    for (char& c : word) {
        c = tolower(c);
    }
    return word;
}

int main () {
    // colors
    set<string> COLORS = {"yellow", "blue", "red"};

    // color combination map
    map< set <string>, string > colors_map;
    colors_map[{"blue", "yellow"}] = "green";
    colors_map[{"blue", "red"}] = "purple";
    colors_map[{"red", "yellow"}] = "orange";

    cout<<"Choose between the colors blue, yellow, and red to create a new blend!\n";
    string first_color, second_color;

    bool choosing_first = true;
    while (choosing_first) {
        string choice;

        cout<<"Choose your first color.\n:";
        cin >> choice;

        choice = lower_string(choice);

        if (COLORS.count(choice)){
            first_color = choice;
            choosing_first = false;

        } else {
            cout <<"Invalid choice detected.\nPlease choose blue, yellow, or red.\n";
        }
    }

    bool choosing_second = true;
    while (choosing_second) {
        string choice;

        cout<<"Choose your second color.\n:";
        cin >> choice;

        choice = lower_string(choice);

        if (COLORS.count(choice)){
            second_color = choice;
            choosing_second = false;

        } else {
            cout <<"Invalid choice detected.\nPlease choose blue, yellow, or red.\n";
        }
    }

    // create a set of our two colors, index the colors map with our set to get our final color
    set<string> two_choices = {first_color, second_color};
    cout<<"Your selection of "<<first_color<<" and " <<second_color<<" yielded "<<colors_map[two_choices]<<"!\n";

    return 0;
}

