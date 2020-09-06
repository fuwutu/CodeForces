#include <iostream>
using namespace std;
int main(){
    long long y;
    int a=0;
    cin >> y;
    while(y!=0){
        if(y%10==4 || y%10==7){
            a++;
        }
        y = y/10;
    }
    if(a==4 || a==7){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    
}
