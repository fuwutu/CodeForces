#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int s,n,count=0;
    pair<int, int>a[1000];
    cin>>s>>n; //s=2
    int c=s; //c=2
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i].first>=c){
            cout<<"NO";
            break;
        }
        else {
            c=c+a[i].second;
            count++;
        }
    }

    if(count==n){
        cout<<"YES";
    }
}