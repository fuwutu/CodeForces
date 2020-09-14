#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long l =s.length();
    bool flag = true;
    for(int i=0;i<l;){
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
            i+=3;
        }
        else if(s[i]=='1' && s[i+1]=='4'){
            i+=2;
        }
        else if(s[i]=='1'){
            i++;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}