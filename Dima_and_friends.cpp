#include <iostream>
using namespace std;
int main(){
    int n,f,count=0,sum=0,a;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>f;
        sum+=f;
    }
    for(int j=1;j<=5;j++){
        a= sum+j;
        if(a%(n+1)!=1){
            count++;
        }
    }
    cout<<count;
}