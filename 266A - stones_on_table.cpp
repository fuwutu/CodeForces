#include <iostream>
#include <string>
using namespace std;
int main() {
    int l;
    string s;
    int count=0;
    cin >> l >> s;
    for(int i=0;i<l;i++){
        if(s[i]=='R' && s[i+1] == 'R'){
            count++;
        }
        else if(s[i]=='G' && s[i+1]=='G'){
            count++;
        }
        else if(s[i]=='B' && s[i+1] == 'B'){
            count++;
        }
    }
    cout<<count<<endl;
}