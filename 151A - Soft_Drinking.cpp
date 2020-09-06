#include <iostream>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np,min;
    cin>> n>>k>>l>>c>>d>>p>>nl>>np;
    int r = (k*l)/nl;
    int b = c*d;
    int q = p/np;
    if(r<b && r<q){
        min=r;
    }
    else if(b<q){
        min=b;
    }
    else{
        min=q;
    }
    int result =min/n;
    cout<<result;
}