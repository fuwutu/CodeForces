#include<bits/stdc++.h>
#include<cstdio>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
#define fr(i,a,b) for(int i=a;i<b;i++)
#define frn(i,a,b) for(int i=a;i>=b;i--)
#define vi vector<int>
#define pii pair<int,int>
#define vpi vector<pair<int,int>>
#define vvi vector<vector<int>>
#define test int t;cin>>t; while(t--)
#define mp make_pair
#define pb push_back
#define pu push
#define fi first
#define se second
#define mod 1000000007
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update> seti;
void fast() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}



int32_t main() {
    fast();
    test{
        int n;
        cin>>n;
        int a[n+1];
        fr(i,0,n) cin>>a[i];   
        int cnt1 = 0;
        int cnt0 = 0;
        fr(i,0,n){
            cnt1 += (a[i]==1);
            cnt0 += (a[i]==0);
        }
        if(cnt0<n/2){
            if((n-cnt0)%2==0){
                cout<<n-cnt0<<endl;
                fr(i,0,(n-cnt0)) cout<<"1"<<" ";
                cout<<endl;
            }
            else{
                cout<<n-cnt0-1<<endl;
                fr(i,0,n-cnt0-1) cout<<"1 ";
                cout<<endl;
            }
        }
        else{
            cout<<cnt0<<endl;
            fr(i,0,cnt0) cout<<'0'<<" ";
            cout<<endl;
        }
    }
}
