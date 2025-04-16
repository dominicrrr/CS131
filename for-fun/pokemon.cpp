#include <iostream>
#include <map>
#include <tuple>

using namespace std;


// Pokemon base class
class Pokemon {
    public:
        string type;
        string name;
        float max_health;
        float health;
        float ap;

        // Constructor using initialization list
        Pokemon(string type, string name, float max_health, float health, float ap)
            : type(type), name(name), max_health(max_health), health(health), ap(ap) {}
};

// Pokemon types
class GrassType: public Pokemon{
    public:
        // map of {str: tuple(damage_float, acc_float)}
        map<string, tuple< float, float> > attacks;

        GrassType(string name, float max_health, float health, float ap)
            : Pokemon("Grass", name, max_health, health, ap) {
                attacks["razor_leaf"] = make_tuple(0.4, 3 * (1.2 * ap));
            }
};

// Main game vars

bool playing = true;
string selected_pokemon = "";

// Main instance
int main(){
    // Creating pokemon game loop
    
    while (playing) {
        string input;
        
        cout<<"Choose your pokemon"<<"\n";
        cin >> input;
        cout<<"you selected: " << input<< "\n";
        playing = false;
    }


    return 0;
}

// int choose_pokemon(){
//     bool choosing = true;
//     string pokemon_name;

//     while(choosing) {
//         htonl
//         return 0;       
//     }
// }