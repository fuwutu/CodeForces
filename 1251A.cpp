#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        unordered_set<char>st;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] != s[i+1]){
                st.insert(s[i]);
            }else{
                i++;
            }
        }
        vector<char>v;
        for(auto i : st){
            v.push_back(i);
        }
        sort(v.begin(), v.end());
        for(auto i = v.begin(); i != v.end(); i++){
            cout << *i;
        }
        cout << endl;
    }
}