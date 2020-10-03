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
int l;
string a, b, s;
int dp[51][17][17][17];
int solve(int pos, int tr, int si, int ni, int t) {
	if (tr == l || si == l || ni == l) return 0;
	if (pos == s.length()) return (tr == si) & (si == ni) & (tr > 0);
	if (dp[pos][tr][si][ni] != -1 && !t) return dp[pos][tr][si][ni];
	int e = t ? s[pos] - '0' : 9;
	int ret = 0;
	fr(i, 0, e + 1)	ret += solve(pos + 1, tr + (i == 3), si + (i == 6), ni + (i == 9), t & (i == e));
	return t?ret:dp[pos][tr][si][ni] = ret % mod;
}
int32_t main () {
	fast();
	int t; cin >> t;
	while (t--) {
		cin >> a >> b;
		//memset(dp, -1, sizeof dp);
		int w3 = 0, w6 = 0, w9 = 0;
		l = a.length()/3+1;
		fr(i,0,a.length()) fr(j,0,l) fr(k,0,l) fr(e,0,l) dp[i][j][k][e] = -1;
		fr(i, 0, a.length()) {
			if (a[i] == '3') w3++;
			else if (a[i] == '6') w6++;
			else if (a[i] == '9') w9++;
		}
		s = a;
		if (w3 > 0) w3 = (w3 == w6) & (w6 == w9);
		int k = solve(0, 0, 0, 0, 1);
		//memset(dp, -1, sizeof dp);
		
		s = b;
		l = b.length()/3+1;
		fr(i,0,b.length()) fr(j,0,l) fr(k,0,l) fr(e,0,l)dp[i][j][k][e] = -1;
		int d = solve(0, 0, 0, 0, 1);
		cout << (d - k + w3+mod)%mod << endl;
	}
	return 0;
}