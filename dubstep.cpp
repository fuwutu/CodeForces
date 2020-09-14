#include <iostream>
#include <string>
using namespace std;
 int main(){
    string s;
    cin>>s;
    int count=1;
    int l=s.length();
    for(int i=0;i<l;){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=3;
            if(!count){
                cout<<" ";
                count=1;
            }
            continue;
        }
        else {
            cout<<s[i];
            i++;
            count=0;
        }
    }
 }