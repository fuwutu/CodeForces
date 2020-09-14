#include <iostream>
using namespace std;
int main(){
    int n,a,b,count=0;
    cin>>n>>a>>b;
    cout<<min(n-a,b+1);
}