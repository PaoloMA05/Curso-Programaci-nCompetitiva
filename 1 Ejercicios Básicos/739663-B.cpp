//la velocidad v en el tiempo t siempre es exactamente el promedio de la altura del trapecio,
//lo que hace que el área total siempre sea 2⋅v⋅t

#include <iostream>

using namespace std;

int main() {

    int v, t;
    int casos_de_prueba;
    while(cin >> v >> t) {
        cout << 2*v*t << endl;
    }
}