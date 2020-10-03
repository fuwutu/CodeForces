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
typedef tree<pii, null_type, greater<pii>, rb_tree_tag,
        tree_order_statistics_node_update> seti;
void fast() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
string a, b;
int dp[1002][1002][11][2];
int k; int n; int m;
int solve(int x, int y, int rem, int c) {
	if (x == n || y == m) {
		if (rem == 0) return 0;
		else return -1000000000;
	}
	if (rem == 0) return 0;
	if (dp[x][y][rem][c] != -1) return dp[x][y][rem][c];
	int ans;
	if (c == 1) {
		ans = solve(x + 1, y, rem - 1, 0);
		ans = max(ans, solve(x, y + 1, rem - 1, 0));
		if (a[x] == b[y]) {
			ans = max(ans, 1 + solve(x + 1, y + 1, rem, 1));
			ans = max(ans, 1 + solve(x + 1, y + 1, rem - 1, 0));
		}
	}
	else {
		ans = solve(x + 1, y, rem, 0);
		ans = max(ans, solve(x, y + 1, rem, 0));
		if (a[x] == b[y]) {
			ans = max(ans, 1 + solve(x + 1, y + 1, rem, 1));
			ans = max(ans, 1 + solve(x + 1, y + 1, rem - 1, 0));
		}
	}
	return dp[x][y][rem][c] = ans;
}
int32_t main() {
	fast();
	cin >> n >> m >> k;
	cin >> a >> b;
	memset(dp, -1, sizeof(dp));
	cout << solve(0, 0, k, 0);
	return 0;
}