//Cuando me pidan n18 es long long, int solo puede n9
//En este caso defino dos limites para la busqueda binaria L y R
//Ojo paolo con usar "(L + R) / 2" puede provocar desbordamiento, es más seguro usar "L + (R - L) / 2"
//Los soldados_necesarios = (mitad * ...), es la formula de gauss, 1+2 ... +10 = 11 x 5(mitad)

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int casos_de_prueba;
    cin >> casos_de_prueba;

    while(casos_de_prueba--){
        long long L = 0;
        long long R = 2000000000;
        long long mejor_respuesta = 0;

        long long cantidad_de_soldados;
        cin >> cantidad_de_soldados;

        while(L <= R){
            long long mitad = L + (R - L) / 2;
            long long soldados_necesarios = (mitad * (mitad + 1)) / 2;

            if(cantidad_de_soldados >= soldados_necesarios) {
                mejor_respuesta = mitad;
                L = mitad + 1;
            } else {
                R = mitad - 1;
            }
        }

        cout << mejor_respuesta << "\n";


    }
    
    return 0;

}