#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
int dp[1000001] = {0};

int findVal(int k){
	if(dp[k]) return dp[k];
	if(k&1){
		if(k>1000000){
			return 2+findVal((3*k+1)>>1);
		}
		else{
			int ans = 2+findVal((3*k+1)>>1);
			dp[k]  = ans;
			return dp[k];
		}
	}
	else{
		if(k>1000000) return 1+findVal(k/2);
		else{
			int ans = 1+findVal(k/2);
			dp[k]  = ans;
			return dp[k];
		}
	}
}

int32_t main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt" , "r",stdin);
    freopen("output.txt","w",stdout);
  #endif
	dp[1] = 1;

	int i,j;
	int ans;
	while(cin>>i&&cin>>j){
		ans = 0;
		if(i>j){
			int temp = i;
			i = j;
			j = temp;
		}
		for(int h=i;h<=j;h++){
			ans = max(ans,findVal(h));
		}
		
		cout<<i<<" "<<j<<" "<<ans<<endl;
	}
	return 0;
}