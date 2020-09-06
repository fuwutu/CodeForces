#include <iostream>
using namespace std;
int main() {
    int A[1001],n,min,max,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    min=A[0];
    max=A[0];
    for(int i=1;i<n;i++){
        if(A[i]>max){
            count++;
            max=A[i];
        }
        else if(A[i]<min){
            count++;
            min=A[i];
        }
    }
    cout<<count;
}