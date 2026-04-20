//El juez nunca miente, nunca debes escribir código para validar los límites del input
//Pierdes tiempo valioso de ejecución, el juez es un robot ciego.

// ((k - 1 + p) % n) + 1 : es por asi decirlo una vuelta al reloj jugador 2 da seis pases,
// nueva posicion 8 % 5(total de jugadores) = 3(este jugador tiene la pelota), temporal -1 por 
// errores de resultad 0

#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    int caso = 1;
    while(T--) {
        int n, k , p;
        cin >> n >> k >> p;

        cout << "Case " << caso << ": " << ((k - 1 + p) % n) + 1 << endl;
        
        caso++;
    }
}