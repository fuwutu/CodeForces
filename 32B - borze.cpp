#include <iostream>
#include <string>

using namespace std;
int main() {
    string s;
    cin >> s;
    int l = s.length();
    for(int i=0;i<l;i++){
        if(s[i] == '-' && s[i+1] == '.'){
            cout<<"1";
            i++;
        }
        else {
            if(s[i] == '-' && s[i+1] == '-'){
                cout<<"2";
                i++;
            }
            else {
                cout<<"0";
            }
        }

    }
}