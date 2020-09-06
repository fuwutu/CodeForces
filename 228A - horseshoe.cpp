#include <iostream>
using namespace std;
int main(){
    int A[4],count=0,a=0;
    for(int i=0;i<4;i++){
        cin>>A[i];
    }
    for(int i=0;i<4;i++){
        if(a!=A[i]){
            for(int j=i+1;j<4;j++){
            if(A[i]==A[j]){
                count++;
                a=A[i];
            }
        }
        }
    }
    cout<<count;
}