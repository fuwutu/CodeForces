#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int count = 0;
    string s,s1;
    cin>>s>>s1;
    int l = s.length();
    for(int i=0;i<l;i++){
        s[i]=tolower(s[i]);
        s1[i]=tolower(s1[i]);
    }
    if(s==s1){
        cout<<"0";
    }
    else{
        for(int i=0;i<l;i++){
            if(s[i]<s1[i]){
                cout<<"-1";
                break;
            }
            else if(s1[i]<s[i]){
                cout<<"1";
                break;
            }
        }
    }

}