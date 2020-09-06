#include <iostream>
using namespace std;
int main(){
    int n,a,b,c=0,max=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        c=c+(b-a);
        if(c>max){
            max=c;
        }
    }
    cout<<max;

}