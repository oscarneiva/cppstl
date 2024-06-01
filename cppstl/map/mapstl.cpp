#include <iostream>
#include <map>
#include <string>
#include <list>

using namespace std;

int main() {
    map< string, list<string> > pokedex;

    list<string> pikachuAttacks {"thunder shock", "tail whip", "quick attack"};
    list<string> charmanderAttacks {"flamethrower", "scary face"}; // Corrected spelling to match the usual convention
    list<string> chikoritaAttacks {"razor leaf", "poison powder"};

    // Corrected the keys to use consistent casing
    pokedex.insert(pair< string, list<string> >("Pikachu", pikachuAttacks));
    pokedex.insert(pair< string, list<string> >("Charmander", charmanderAttacks));
    pokedex.insert(pair< string, list<string> >("Chikorita", chikoritaAttacks));

    for (auto &pair : pokedex) {
        cout << pair.first << " - ";
        for (auto &attack : pair.second)
            cout << attack << ", ";
        cout << endl;
    }

    // Use std::cin.get() instead of system("pause>0") for cross-platform compatibility
    std::cin.get();
    return 0;
}
