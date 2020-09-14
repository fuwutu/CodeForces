#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m,p[50],count=0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>p[i];
    }
    sort(p,p+m);
    int lmax= p[n-1]-p[0]; //first n checked
    for(int i=0;i<m-n;i++){        //p[0] already checked
        if(p[n+i]-p[i+1] < lmax){
            lmax = p[n+i]-p[i+1];
        }
    }
    cout<<lmax;

}