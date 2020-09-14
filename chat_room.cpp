#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string a,b="hello";
    int l,j=0,count=0;
    cin>>a;
    l=a.length();
    for(int i=0;i<l;i++){       //try a[i]==b[j]
        if(a[i]==b[j]){
            j++;
            count++;
        
            if(count==5){
                break;
            }
        }
    }
    if(count==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}