#include <iostream>
using namespace std;
int main() {
    int n,l,r;
    int lopen=0,lclose=0,ropen=0,rclose=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>l>>r;
        if(l==0){
            lclose++;
        }
        else{
            lopen++;
        }
        if(r==0){
            rclose++;
        }
        else{
            ropen++;
        }
    }
    if(lclose<lopen){
        l=lclose;
    }
    else{
        l=lopen;
    }
    if(rclose<ropen){
        r=rclose;
    }
    else{
        r=ropen;
    }
    cout<<l+r; 
}