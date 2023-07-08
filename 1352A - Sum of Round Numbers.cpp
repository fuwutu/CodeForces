#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    
	int t,n;
    int aa[100000];
    cin>>t;
    while(t--)
    {
        int d=0,rem=0;
        cin>>n;
        if(n >= 1000){
            rem=n%1000;
            aa[d++]=n-rem;
            n%=1000;
        }
        if(n >= 100){
            rem=n%100;
            aa[d++]=n-rem;
            n%=100;
        }
        if(n >= 10){
            rem=n%10;
            aa[d++]=n-rem;
            n%=10;
        }
        if(n<10 && n>0){
            aa[d++]=n;
        }
        vector<int>va;
        for(int i=0; i<d; i++){
            va.push_back(aa[i]);
        }
        cout<<va.size()<<endl;
        for(int i=0; i<va.size(); i++){
            cout<<va[i]<<" ";
        }
        cout<<endl;
    }
}