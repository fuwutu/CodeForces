#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m,arr[101],sum=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<m;i++){
        if(arr[i]<0){
            sum+=arr[i];
        }
    }
    cout<<-1*sum;
    
}