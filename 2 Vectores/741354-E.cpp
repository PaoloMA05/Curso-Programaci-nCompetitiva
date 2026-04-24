#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string camas;
    
    while(cin >> camas) {
        int racha_actual = 0;
        int maxima_cadena = 0;
        bool ya_vi_una_x = false; 

        for(char actual : camas) {
            if(actual == '.') {
                racha_actual++;
            } 
            else if (actual == 'X') {
                if (racha_actual > 0) {
                    int puntaje_bloque = 0;
                    
                    if (!ya_vi_una_x) {
                        puntaje_bloque = racha_actual - 1;
                    } else {
                        puntaje_bloque = (racha_actual - 1) / 2;
                    }
                    
                    maxima_cadena = max(maxima_cadena, puntaje_bloque);
                }
                
                racha_actual = 0;
                ya_vi_una_x = true;
            }
        }
        
        if (racha_actual > 0) {
            int puntaje_bloque = racha_actual - 1;
            maxima_cadena = max(maxima_cadena, puntaje_bloque);
        }

        cout << maxima_cadena << "\n";
    }

    return 0;
}