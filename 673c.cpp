// avvinci
//#include"prettyprint.hpp"
#include<bits/stdc++.h>
using namespace std;

typedef pair<long long int , long long int> P;
#define mod 1000000007  
#define all(container) container.begin(),container.end()
#define tr(container,it) for(typeof(container.begin()) it = container.begin();it!=container.end();it++)
#define pb push_back
#define CLR(arr) memset(arr, 0, sizeof(arr))
#define mk make_pair
#define present(container,x) ((container).find(x) != (container).end())
#define inf 3234567891
//#define infl LLONG_MAX
#define fs first
#define sc second
#define ll long long int
#define fr(it,st,en) for(it=st;it<en;it++)
#define INP ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ws(x) cout << #x << " = " << x << endl
#define sz size()
#define N 1002
const long long infl = 1e18+5;

ll m,n,q,cn,i,j,k,w,pos,tmp1,sz,mx =-1,tmp,mx1 = -1,val,sm,a,b,c,d,mn = infl ,cnt,k1;
//vector< vector< int > > g(N);
int cons[N][N] ,dp[N][N][11],ans;
double d1;
string s,t;

int main(){
INP
if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}
cin>>n>>m>>k1;
cin>>s;
cin>>t;
fr(i,1,n+1){
	fr(j,1,m+1){
		if(s[i-1] == t[j-1])
			cons[i][j] = cons[i-1][j-1]+1;		

	}
}

fr(k,1,k1+1){
	fr(i,1,n+1){
		fr(j,1,m+1){
			int len = cons[i][j];
			dp[i][j][k] = max (max(dp[i-1][j][k] , dp[i][j-1][k]) , dp[i-len][j-len][k-1] + len );
			ans = max(ans,dp[i][j][k]);
		}
	}
}
cout<<ans;
return 0;
}