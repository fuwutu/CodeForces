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
	int a[n+1];
	for (int i = 0; i < n; ++i) cin>>a[i];

	int aa[n+1]; aa[0] = 0;
	int ba[n+1]; ba[n-1]= 0;
	for(int i=1;i<n;i++){
		aa[i] = aa[i-1]+a[i-1];
		ba[n-i-1] = ba[n-i] + a[n-i];
	}
	int i = 0;
	while(aa[i]<=ba[i] && i<n) i++;
	cout<<i<<" "<<n-i;
	

	return 0;
}