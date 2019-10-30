#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<string>v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int odd = 0;int zero = 0, one = 0;
        for(auto i: v){
            
            for(auto j: i){
                if(j == '0')zero ^= 1;
                if(j == '1')one ^= 1;
            }
            if(i.length()%2){
                odd = 1;
            }
        }
        if(!odd && zero){
            cout << n-1 << endl;
        }
        else{
            cout << n << endl;
        }
    }
}