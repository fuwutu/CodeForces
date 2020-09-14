#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k,part,output;
   
    cin>>n>>k;

    if(n%2==0)
    {
        part=n/2;
    }
    else
    {
        part=(n/2)+1;
    }

    if(k<=part)
    {
        output=(2*k)-1;
    }
    else
    {
        output=(k-part)*2;
    }

    cout<<output<<endl;



    return 0;
}

