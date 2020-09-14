#include <iostream>
using namespace std;
int main(){
    int n,m,count=0;
    cin>>n>>m;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            int x = (i*i)+j;
            int y = i+(j*j);
            if(x==n && y==m){
                count++;
            } 
        }
    }
    cout<<count;
}