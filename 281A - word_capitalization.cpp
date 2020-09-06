#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int l= s.length();
    for(int i=0;i<l;i++){
        if(i==0){
            char ch;
            ch=toupper(s[0]);
            cout<<ch;
        }
        else {
            cout<<s[i];
        }
    }
}