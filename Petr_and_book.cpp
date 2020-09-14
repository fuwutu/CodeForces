#include <iostream>
using namespace std;
int main(){
    int n,pages[8],sum=0;
    cin>>n;
    for(int i=1;i<=7;i++){
        cin>>pages[i];
    }
    while(sum<n){
        for(int i=1;i<=7;i++){
            sum += pages[i];
            if(sum>=n){
                cout<<i;
                break;
            }
        }

    }

    
}