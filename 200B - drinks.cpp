#include <iostream>
using namespace std;
int main(){
    int n;
    float volume=0.0;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        volume +=x;
    }
    float c= volume/n;
    cout<<c;
}