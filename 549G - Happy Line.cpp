// 61448536	Sep/28/2019 20:31UTC-3	joaodantas31.jpd	549G - Happy Line	GNU C++17	Accepted	124 ms	800 KB

#include <bits/stdc++.h>
#include <list>

using namespace std;

int t, aux, temp;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    cin >> t;
    int fila[t];

    for(int i = 0; i < t; i ++){
        cin >> aux;
        aux = aux+i;
        fila[i] = aux;
    }

    sort(fila, fila+t);

    for (int i = 0; i < t; i ++)
        fila[i] -= i;

    for (int i = 1; i < t; i ++){
        if(fila[i] < fila[i-1]){
            cout << ":(" << endl;
            return 0;
        }
    }

    for (int i = 0; i < t; i ++)
        cout << fila[i] << " ";
    cout << endl;

    return 0;

}
