#include <iostream>
#include <string>
using namespace std;
int main(){
    int count=0;
    string s;
    cin>>s;
    int l = s.length();
    for(int i=0;i<l;i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            count=1;
        }
    }
    if(count){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}