#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,n) for(int i=a ; i<n ; i++)
#define rf(i,n,a) for(int i=n ; i>=a ; i--)
#define F first
#define S second
#define all(c) (c).begin(),(c).end()
#define sz(v) (int)(v).size()
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;
typedef vector<pii> vpi;

const int inf = 1e9;
const int inf64 = 1e18;
const int MOD = inf + 7;
const int N = 2e3 + 5;
int n, m;
vector<pii> v1, v2, v;
map<pair<int, pii>, int> mm;

int32_t main() {
   fast;
   cin >> n >> m;
   for (int i = 0; i < n; i++) {
      int t1, t2;
      cin >> t1 >> t2;
      v1.pb({t1, t2});
   }

   for (int i = 0; i < m; i++) {
      int t1, t2;
      cin >> t1 >> t2;
      v2.pb({t1, t2});
   }

   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         if (v1[j].F <= v2[i].F && v1[j].S <= v2[i].S) {
            v.pb({v2[i].F - v1[j].F + 1, v2[i].S - v1[j].S + 1});
         }
      }
   }

   int x = v.size();
   sort(all(v));

   int dp[x + 5] = {0};
   for (int i = x - 1; i >= 0; i--) {
      dp[i] = max(dp[i + 1], v[i].S);
   }

   int res = inf64;

   for (int i = 0; i < x; i++) {
      pair<int, int> pp = mp(v[i].F + 1, -1);
      int pos = lower_bound(all(v), pp) - v.begin();
      res = min(res, dp[pos] + v[i].F);
   }
   
   res = min(res, dp[0]);
   
   cout << res << "\n";
}
