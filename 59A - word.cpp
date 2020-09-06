#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int upper=0,lower=0;
    cin >> s;
    int l = s.length();
    for(int i=0;i<l;i++){

        if(isupper(s[i])){
            upper++;
        }
        else{
            lower++;
        }
    }
    if(lower>=upper){
        for(int i=0;i<l;i++){
            char ch;
            ch=tolower(s[i]);
            cout<<ch;
        }
    }
    else{
         for(int i=0;i<l;i++){
            char ch;
            ch=toupper(s[i]);
            cout<<ch;
        }
    }
}