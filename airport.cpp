#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m,a[1000];
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    int min=0,no=a[0],k=0;
    for(int i=0;i<n;i++){
        min += no;
        no -= 1;
        if(no==0){
            no=a[++k];
        }
    }
    sort(a,a+m,greater<int>());
    int max=0;
    while(n--){
        max += a[0];
        a[0] -= 1;
        for(int i=1;i<m;i++){
            if(a[i]<=a[i-1]){
                break;
            }
            swap(a[i],a[i-1]);
        }
    }
    cout<<max<<" "<<min<<endl;
    return 0;

}