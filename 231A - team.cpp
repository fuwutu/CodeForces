#include <iostream>
using namespace std;
int main(){
    int a,b,c,sum=0,count=0,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        sum=sum+a+b+c;
        if(sum>=2){
            count++;
        }
        sum=0;
    }
    cout<<count;
}