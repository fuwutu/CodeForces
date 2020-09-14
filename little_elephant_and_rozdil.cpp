#include <iostream>
using namespace std;
int main(){
    long long n;
    int count=1,index,min=1000000001;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        if(a<min){
            min=a;
            index=i;
            count =1;
        }
        else if(a==min){
            count++;
        }
    }
    if(count==1){
        cout<<index;
    }
    else{
        cout<<"Still Rozdil";
    }
    
}