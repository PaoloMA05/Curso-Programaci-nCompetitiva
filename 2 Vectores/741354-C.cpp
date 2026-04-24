#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int caso = 1; caso <= T; ++caso) {
        string calle;
        cin >> calle;

        int espacios_validos = 0;
        int n = calle.length();

        for (int i = 0; i < n; ++i) {
            if (calle[i] != '-') {
                continue;
            }

            bool valido = true;

            if (i + 1 < n && calle[i + 1] == 'B') {
                valido = false;
            }
            if (i + 2 < n && calle[i + 2] == 'B') {
                valido = false;
            }
            if (i + 1 < n && calle[i + 1] == 'S') {
                valido = false;
            }
            if (i - 1 >= 0 && calle[i - 1] == 'S') {
                valido = false;
            }

            if (valido) {
                espacios_validos++;
            }
        }

        cout << "Case " << caso << ": " << espacios_validos << "\n";
    }

    return 0;
}