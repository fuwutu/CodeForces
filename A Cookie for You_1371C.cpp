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
bool myc(int a,int b) {
	return a>b;
}
int32_t main() {
	fast();
	test{
		int a,b,n,m;
		cin>>a>>b>>n>>m;
		if(a+b<n+m) cout<<"No"<<endl;
		else{
			int d = min(a,b);
			if(d>=m) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
	}
	return 0;
}