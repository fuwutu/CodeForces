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
	int n;
	cin>>n;
	int a[n+1];
	int b[21];
	memset(b,0,sizeof(b));
	fr(i,0,n){
		cin>>a[i];
		fr(j,0,20){
			if(a[i]&((int)(1<<j))) b[j]++;
		}
	}
	fr(i,0,n){
		int k = 0;
		fr(j,0,20){
			if(b[j]){
				k += (int)(1<<j);
				b[j]--;
			}
		}
		a[i] = k;
	}
	int ans = 0;
	fr(i,0,n) ans+= a[i]*a[i];
	cout<<ans;

	return 0;
}