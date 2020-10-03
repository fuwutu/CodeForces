#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
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
/*
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update> seti;*/
void fast() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

int tree[800004];
int lazy[800004][3];

void update(int s,int e,int qs,int qe,int i,int a,int d){
  if(lazy[i][0]){
    tree[i]+=((e-s+1)*( 2*lazy[i][1]  + lazy[i][2]*(e-s)))/2;
    if(s!=e){
      lazy[2*i][0] = lazy[2*i+1][0] = 1;
      lazy[2*i][1] += lazy[i][1];
      lazy[2*i][2] += lazy[i][2];
      lazy[2*i+1][1] += lazy[i][1] + ((s+e)/2 - s +1)*lazy[i][2];
      lazy[2*i+1][2] += lazy[i][2];
    }
    lazy[i][0] = lazy[i][1] = lazy[i][2] = 0;
  }
  if(qs<=s && qe>=e){
    tree[i]+=((e-s+1)*( 2*a  + d*(e-s)))/2;
    if(s!=e){
      lazy[2*i][0] = lazy[2*i+1][0] = 1;
      lazy[2*i][1] += a;
      lazy[2*i][2] += d;
      lazy[2*i+1][1] += a+((s+e)/2-s +1)*d;
      lazy[2*i+1][2] += d;
    }
    return;
  }
  if(s>qe || e<qs) return;
  int r = (s+e)/2-max(s,qs)+1;
  if(r>0){
    update(s,(s+e)/2,qs,qe,2*i,a,d);
    update((s+e)/2+1,e,qs,qe,2*i+1,a+(r)*d,d);
  }
  else{
    update((s+e)/2+1,e,qs,qe,2*i+1,a,d);
  }
  tree[i] = tree[2*i]+tree[2*i+1];
}
int query(int s,int e,int pi,int i){
  if(lazy[i][0]){
    tree[i]+=((e-s+1)*( 2*lazy[i][1]  + lazy[i][2]*(e-s)))/2;
    if(s!=e){
      lazy[2*i][0] = lazy[2*i+1][0] = 1;
      lazy[2*i][1] += lazy[i][1];
      lazy[2*i][2] += lazy[i][2];
      lazy[2*i+1][1] += lazy[i][1] + ((s+e)/2 - s +1)*lazy[i][2];
      lazy[2*i+1][2] += lazy[i][2];
    }
    lazy[i][0] = lazy[i][1] = lazy[i][2] = 0;
  }
  if(s==e && pi==s) return tree[i];
  else if(e<pi || s>pi) return 10000000000000000;
  int l = query(s,(s+e)/2,pi,2*i);
  int r = query((s+e)/2+1,e,pi,2*i+1);
  return min(l,r);
}

int32_t main() {
  fast();
  memset(tree,0,sizeof tree);
  memset(lazy,0,sizeof lazy);
  int n,m;
  cin>>n>>m;
  int a,b,c,d;
  int r;
  fr(i,0,m){
    cin>>a;
    if(a==1){
      cin>>b>>c>>d>>r;
      update(0,n-1,b-1,c-1,1,d,r);
      //cout<<d<<" "<<r<<endl;
      //cout<<query(0,n-1,b,1)<<endl;
    }
    else{
      cin>>b;
      cout<<query(0,n-1,b-1,1)<<endl;
    }
  }
  return 0;
}