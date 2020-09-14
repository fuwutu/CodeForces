#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,ck=1,dk=0;
    string arr,brr,crr;
    cin>>n>>arr;
    for(int i=1;i<n;i++){
        cin>>brr;
        if(brr==arr){
            ck++;
        }
        else{
            crr=brr;
            dk++;
        }
    }
    if(ck>dk){
        cout<<arr;
    }
    else{
        cout<<crr;
    }
}