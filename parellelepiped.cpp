#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int x,y,z;
    double a,b,c;
    cin>>x>>y>>z;
    a = sqrt((x*y)/z);
    b = sqrt((x*z)/y);
    c = sqrt((y*z)/x);
    int total_length = (a+b+c)*4;
    cout<<total_length;
}