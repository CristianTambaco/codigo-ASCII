#include <iostream>
using namespace std;

int main() {
    char caracter;
    
    cout << "** Codigo ASCII ** " <<endl;
    cout << "                   " <<endl;
    cout << "Ingresa una letra: ";
    cin >> caracter;

    int ascii = static_cast<int>(caracter);
    cout << "El codigo ASCII de '" << caracter << "' es " << ascii << endl;

    return 0;
}
