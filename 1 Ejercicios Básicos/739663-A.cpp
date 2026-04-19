//Cuando me pidan n18 es long long, int solo puede n9

#include <iostream>

using namespace std;

int main() {

    int casos_de_prueba;
    cin >> casos_de_prueba;
    while(casos_de_prueba--) {
        long long cantidad_de_soldados;
        cin >> cantidad_de_soldados;
        
        int filas_necesarias = 0;
        int soldados_siguiente_fila = 1;

        while(cantidad_de_soldados >= soldados_siguiente_fila + filas_necesarias) {
            cantidad_de_soldados -= filas_necesarias;
            filas_necesarias++;
            soldados_siguiente_fila++;
        }

        cout << filas_necesarias << endl;
    }



    cout << "Prueba 1" << endl;

    return 0;

}