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
#define fi first
#define se second
#define mod 1000000007
void fast() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main() {
	fast();
	int n; cin >> n;
	int a[n + 1];
	fr(i, 0, n) cin >> a[i];
	sort(a, a + n);
	if (n == 1) cout << "-1";
	else if (n == 2) {
		if (a[1] - a[0] == 0) {
			cout << "1" << endl << a[0];
			return 0;
		}
		vi ans;
		if ((a[0] + a[1]) % 2 == 0) {
			ans.pb((a[0] + a[1]) / 2);
		}
		ans.pb(a[0] - (a[1] - a[0]));
		ans.pb(a[1] + (a[1] - a[0]));
		cout << ans.size() << endl;
		sort(ans.begin(), ans.end());
		for (auto i : ans) cout << i << " ";
	}
	else {
		int d = 0;
		fr(i, 1, n) {
			if (a[i] - a[i - 1] == 0) {
				d++;
			}
		}
		if (d == n - 1) {
			cout << "1" << endl << a[0];
		}
		else if (d > 0) cout << '0';
		else {
			set<int> k;
			int l = 0;
			fr(i, 1, n) {
				k.insert(a[i] - a[i - 1]);
				if (k.size() > 2) {
					l = 1;
					break;
				}
			}
			if (l == 1) cout << "0";
			else if (k.size() == 1) {
				vi ans;
				ans.pb(a[0] - (a[1] - a[0]));
				ans.pb(a[n - 1] + (a[1] - a[0]));
				cout << ans.size() << endl;
				sort(ans.begin(), ans.end());
				for (auto i : ans) cout << i << " ";
			}
			else {
				std::set<int>::iterator it = k.begin();
				vi d;
				while (it != k.end())
				{
					d.pb((*it));
					it++;
				}
				if (d[1] != 2 * d[0]) cout << "0";
				else {
					vi ind;
					fr(i, 1, n) {
						if (a[i] - a[i - 1] == d[1]) {
							ind.pb(i);
						}
					}
					if (ind.size() > 1) cout << "0";
					else {
						cout << "1" << endl;
						cout << a[ind[0]] - d[0];
					}
				}
			}
		}
	}
}