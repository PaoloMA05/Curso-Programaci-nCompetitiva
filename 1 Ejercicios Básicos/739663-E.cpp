#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int puntaje_total = 0;
        int racha = 0;
        string cadena;
        cin >> cadena;
        for(char c : cadena) {
            if(c == 'X') {
                racha = 0;
            }
            else if (c == 'O'){
                racha++;
                puntaje_total += racha;
            }
        }
        cout << puntaje_total << endl;
    }
}