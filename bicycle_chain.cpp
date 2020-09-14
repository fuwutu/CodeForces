#include <iostream>
using namespace std;
int main(){
    int n,m,a[50],max=0,count=1,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];    
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b;
        for(int j=0;j<n;j++){
            if(b%a[j]==0){
                int x = b/a[j];
                if(x>max){
                    max=x;
                    count=1;
                }
                else if(x==max){
                    count+=1;
                }
                break;
            }
        }
    }
    cout<<count;
}