#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;                      //sizes of vectors
    cin>>n>>m;
    vector<string> s(n),t(m);     //two vectors of string types of sizes n and m

    for(int i=0;i<n;i++)          //input of vector s
        cin>>s[i];

    for(int i=0;i<m;i++)          //input of vector t
        cin>>t[i];

    int q;                        //no. of queries
    cin>>q;
    
    while(q--)                    //loop running till q queries
    {
        long long int y;          //year
        cin>>y;
        
        int i =  (y-1)%n;         //string number of vector s corresponding to given year
        int j =  (y-1)%m;         //string number of vector t corresponding to given year

        string ans = s[i]+t[j];   //concatenation of both strings
        
        cout<<ans<<"\n";
    }

    return 0;
}