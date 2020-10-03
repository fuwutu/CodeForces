#include<bits/stdc++.h>
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
#define mod 1000000007
void fast() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int dp[4005][4005];
int32_t main() {
	fast();
	memset(dp, 0, sizeof dp);
	int n;
	cin >> n;
	int a[n + 1];
	unordered_map<int, int> m;
	fr(i, 0, n) cin >> a[i];
	int ans = 1;
	fr(i, 0, n) {
		fr(j, 0, i) {
			if (m.count(a[i])) {
				dp[i][j] = 1 + dp[j][m[a[i]]];
			}
			else dp[i][j] = 2;
			m[a[j]] = j;
			//cout<<dp[i][j]<<" ";
			ans = max(ans,dp[i][j]);
		}
	//	cout<<endl;

		m.clear();
	}

	cout << ans;
}