#include <iostream>
#include <vector>

using namespace std;

bool resuelto[4][10005];

int main() {
    int T;
    cin >> T;
    int caso = 1;

    while(T--) {
        for(int i = 1; i <= 3; i++) {
            for(int j = 0; j <= 10000; j++) {
                resuelto[i][j] = false;
            }
        }

        for(int amigo = 1; amigo <= 3; amigo++) {
            int S;
            cin >> S;
            for(int k = 0; k < S; k++) {
                int p;
                cin >> p;
                resuelto[amigo][p] = true;
            }
        }

        vector<int> unicos[4];

        for(int i = 1; i <= 10000; i++) {
            if(resuelto[1][i] && !resuelto[2][i] && !resuelto[3][i]) {
                unicos[1].push_back(i);
            }
            if(resuelto[2][i] && !resuelto[1][i] && !resuelto[3][i]) {
                unicos[2].push_back(i);
            }
            if(resuelto[3][i] && !resuelto[1][i] && !resuelto[2][i]) {
                unicos[3].push_back(i);
            }
        }

        int max_unicos = 0;
        for(int i = 1; i <= 3; i++) {
            int cantidad = unicos[i].size();
            if(cantidad > max_unicos) {
                max_unicos = cantidad;
            }
        }

        cout << "Case #" << caso << ":" << "\n";
        for(int i = 1; i <= 3; i++) {
            int cantidad = unicos[i].size();
            if(cantidad == max_unicos) {
                cout << i << " " << max_unicos;
                for(int p : unicos[i]) {
                    cout << " " << p;
                }
                cout << "\n";
            }
        }
        caso++;
    }

    return 0;
}