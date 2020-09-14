#include <iostream>
using namespace std;
int main(){
    int n,m,pos,arr[101];
    bool flag=true;
    cin>>n>>m;
    pos=n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(flag)
    {
        for(int i=0;i<n;i++){
            arr[i] -= m;
            if(arr[i]>0){
                pos=i+1;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                flag=true;
                break;
            }
            else{
                flag=false;
            }
        }
    }
    cout<<pos<<endl;

    
}