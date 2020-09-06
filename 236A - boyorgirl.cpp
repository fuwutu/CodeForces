#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int count=0;
    string s;
    cin>>s;
    int l=s.length();
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[i+1]){
            count++;
        }
    }
    if(count%2!=0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
}