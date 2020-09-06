#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    string s[100],s1[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        string a = s[i];
        int l=a.length();
        if(l<=10){
            s1[i]=a;
        }
        else{
            int r= l-2;
            string ns=" ";
            string no=to_string(r);
            ns=a[0]+no+a[l-1];
            s1[i]=ns;
        }
    }
    for(int i=0;i<n;i++){
        cout<<s1[i]<<endl;
    }
    return 0;
}