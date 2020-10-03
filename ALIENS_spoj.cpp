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
int32_t main () {
        fast();
  test{
    int a;int b;
    cin>>a>>b;
    deque<int> d;
    int ans = 0;
    int ansS = 0;
    int c = 0;
    int csum = 0;
    int k;
    fr(i,0,a){
        cin>>k;
        if(k+csum<=b) {
            d.pb(k);
            csum+=k;
            c++;
            if(ans<c){
                ans = c;
                ansS = csum;
            }
            else if(ans==c){
                if(ansS>csum)ansS = csum;
            }
        }
        else{
            csum+=k;
            c++;
            d.pb(k);
            while(csum>b){
                csum-=d.at(0);
                c--;
                d.pop_front();
            }
            if(ans<c){
                ans = c;
                ansS = csum;
            }
            else if(ans==c){
                if(ansS>csum)ansS = csum;
            }
        }
    }
    cout<<ansS<<" "<<ans<<endl;
  }
}