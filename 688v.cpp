// avvinci
//#include"prettyprint.hpp"
#include<bits/stdc++.h>
using namespace std;

typedef pair<long long int , long long int> P;
#define mod 1000000007 
#define MOD 1000000007
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
#define N 502
const long long infl = 1e18+5;

ll m,n,q,cn,k,w,pos,tmp1,sz,mx =0,tmp,mx1 = -1,sm,b,c,d,mn = infl ,k1,p,x,i,j,f,cnt,u;
// vector< vector< int > > g(N),ans(2);
 int a[N],dp[N][N][N];

// double d1;
// string s,t;
set<int >  s;
int rec(int ind ,int ssum , int tsum){
	// ws(ind);
	// ws(ssum);
	// ws(tsum);

	if( tsum < 0 )	return  0 ;

	if(ind  < 0   ){
		if( tsum == 0)
			return 1;
		else 
			return 0 ;
	}

	if(dp[ind][ssum][tsum] != - 1)
		return dp[ind][ssum][tsum];
	
	 dp[ind][ssum][tsum] = max(  rec(ind-1,ssum, tsum) , dp[ind][ssum][tsum]);
	 dp[ind][ssum][tsum] = max(  rec(ind-1,ssum, tsum - a[ind]) , dp[ind][ssum][tsum]);
	 dp[ind][ssum][tsum] = max(  rec(ind-1,ssum + a[ind] , tsum - a[ind]) , dp[ind][ssum][tsum]);

	 return dp[ind][ssum][tsum] ;


}
int main(){
INP
if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}
cin>>n>>k;
fr(i,0,n){
	cin>>a[i];
}

fr(i,0,n){
	fr(j,0,k+1){
		fr(u,0,k+1){
			dp[i][j][u] = -1;
		}
	}
}
rec(n-1,0,k);

fr(i,0,n){
	fr(j,0,k+1){
		fr(u,0,k+1){
			if(dp[i][j][u]==1){
				s.insert(j);
				s.insert(k-j);
			}
		}
	}
}

cout<<s.sz<<"\n";
for(auto it : s)
	cout << it <<" ";

return 0;
}