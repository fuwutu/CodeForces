#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	vector<int> a;
	int l;
	unordered_map<int,int> m;
	for(int i=0;i<n;i++){
		cin>>l;
		a.push_back(l);
		m[l] = 1;
	}
	int d = 0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(m.count(abs(a[i]-a[j]))==0){
				d++;
				m[abs(a[i]-a[j])] = 1;
				a.push_back(abs(a[i]-a[j]));
				n++;
			}
		}
	}
	if(d%2==1) cout<<"Alice";
	else cout<<"Bob";
}