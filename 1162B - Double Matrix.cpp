// 61281468	Sep/25/2019 14:04UTC-3	joaodantas31.jpd	1162B - Double Matrix	GNU C++14	Accepted	31 ms	0 KB

#include <bits/stdc++.h>

using namespace std;

int a, b, n, aux;

bool test;

int main(){
    cin >> a >> b;
    int m1[a][b];
    int m2[a][b];

    for(int i = 0; i < a; i++){
        for(int j = 0;j < b; j++){
            cin >> n;
            m1[i][j] = n;
        }
    }
    for(int i = 0; i < a; i++){
        for(int j = 0;j < b; j++){
            cin >> n;
            m2[i][j] = n;
        }
    }

    for(int i = 0; i < a; i++){
        for(int j = 0;j < b; j++){
            if(m1[i][j] > m2[i][j]){
                aux = m2[i][j];
                m2[i][j] = m1[i][j];
                m1[i][j] = aux;
            }
        }
    }

    test = true;

    for(int i = 0; i < a; i++){
        for(int j = 1;j < b; j++){
            if(m1[i][j] <= m1[i][j-1]){
                test = false;
            }
        }
    }
    for(int i = 0; i < a; i++){
        for(int j = 1;j < b; j++){
            if(m2[i][j] <= m2[i][j-1]){
                test = false;
            }
        }
    }

    for(int i = 0; i < b; i++){
        for(int j = 1;j < a; j++){
            if(m1[j][i] <= m1[j-1][i]){
                test = false;
            }
        }
    }

    for(int i = 0; i < b; i++){
        for(int j = 1;j < a; j++){
            if(m2[j][i] <= m2[j-1][i]){
                test = false;
            }
        }
    }

    if(test){
        cout <<"Possible"<< endl;
    } else {
        cout <<"Impossible"<< endl;
    }

}
