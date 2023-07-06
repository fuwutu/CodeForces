#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        int k;
        int s=0;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector <int> a(n-1);
        for(int i=1;i<n;i++)
        {
            a[i-1]=abs(arr[i]-arr[i-1]);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n-k;i++)
        {
            s+=a[i];
        }
        cout<<s<<endl;
    }
    return 0;
}
