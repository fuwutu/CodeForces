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
int bit[150000][27];
string s;
//void buildTree()


void update(int i,char a){
	while(i<=n){
		bit[i][a-'a'] +=1;
		i += (i)&(-i);
	}
}
int query(int i,char ch){
	int sum = 0;
	while(i>0){
		sum += bit[i][ch-'a'];
		i-= i&(-i);
	}
	return sum;
}

int minG(int st,int e,char ch){
	int l = 0;
	if(st == e) return s[st-1] != ch;
	l += ((st+e)/2 +1-st) -(query((st+e)/2,ch) - query(st-1,ch));
	l += minG((st+e)/2+1,e,ch+1);
	int k = 0;
	k += (e - ((st+e)/2 +1) +1) - (query(e,ch) - query((st+e)/2,ch));
	k += minG(st,(st+e)/2,ch+1);
	return min(k,l);
}
int32_t main() {
	fast();
	test{

		cin>>n;
		fr(i,0,n+1)fr(j,0,26) bit[i][j] = 0;
		//string s;
		cin>>s;
		fr(i,0,n)	update(i+1,s[i]);
		cout<<minG(1,n,'a')<<endl;
	}
	return 0;
}