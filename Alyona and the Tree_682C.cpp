#include<bits/stdc++.h>
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
#define N 100005
int a[N];
vector<vpi> g(N);
int n;
int ans = 0;
int sz[N];
int nc(int i,int p){
    int dz = 1;
   // cout<<i<<endl;
    for(auto x:g[i]){
        if(x.first!=p){
            dz+= nc(x.first,i);
        }
    }
    sz[i] = dz;
    return dz;
}
void dfs(int i,int p,int xi){
    if(a[i]<xi)return;
    ans++;
    cout<<i<<endl;
    for(auto x:g[i]){
        if(x.first!=p){
            dfs(x.first,i,max(0LL,xi+x.second) );
        }
    }
}

int32_t main(){
    fast();
    cin>>n;
    fr(i,1,n+1) cin>>a[i];
    int x,y;
    fr(i,2,n+1){
        cin>>x>>y;
        g[i].pb(mp(x,y));
        g[x].pb(mp(i,y));
    }
    nc(1,0); //cout<<sz[1]<<endl;
    dfs(1,0,0);
    cout<<n-ans;
}