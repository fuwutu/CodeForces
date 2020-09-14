#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int k,sum=0,arr[12],count=0,total=0;
    cin>>k;
    for(int i=0;i<12;i++){
        cin>>arr[i];
        total+=arr[i];
    }
    sort(arr,arr+12,greater<int>());
    if(total<k){
        cout<<-1;
    }
    else if(k==0){
        cout<<0;
    }
    else{
        for(int i=0;i<12;i++){
            sum+=arr[i];
            count++;
            if(sum>=k){
                cout<<count;
                break;
            }
        }
    }
}