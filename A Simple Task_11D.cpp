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
int n;
int d[25][25];
int dp[(1<<20)][20];
int solve(int mask,int las,int start){
  if(__builtin_popcount(mask) == n) return d[las][start];
  if(dp[mask][las]!=-1) return dp[mask][las];
  int ret = 0;
  if(__builtin_popcount(mask)>=3) ret = d[las][start];
  fr(i,start+1,n){
    if((!(mask&(1<<i))) && d[las][i]){
      ret += solve((mask|(1<<i)),i,start);
    }
  }
  return dp[mask][las] = ret;
}


int32_t main() {
  fast();
  memset(d,0,sizeof d);
  

  cin>>n;
  int m;cin>>m;
  int a,b;
  fr(i,0,m){
    cin>>a>>b;
    a--;b--;
    d[a][b] = d[b][a] = 1;
  }
  int ans = 0;
  fr(s,0,n){
    memset(dp,-1,sizeof dp);
    ans += solve((1<<(s)),s,s)/2;
  }
  cout<<ans;
  return 0;
}