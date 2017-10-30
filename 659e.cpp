// avvinci
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
#define inf 123456789123456
#define fs first
#define sc second
#define ll long long int
#define fr(it,st,en) for(it=st;it<en;it++)
#define INP ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ws(x) cout << #x << " = " << x << endl
#define N 123456

ll b,cnt, m,n,tmp,q,cn,i,j,k,ans ,pos,val,tmp1,f = 0,sz, vis[N];
vector< vector < ll > > v(N);

void dfs( int ver ,int par){
	if(vis[ver] == 1) {
		f= 1;
		return ; 
	}
	vis[ver] = 1;
	sz++;
	for(auto & it: v[ver]){
		if(it == par) continue;
		dfs(it,ver);
	}

}
int main(){
INP
if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}

cin>>n>>m;
fr(i,0,m){
	cin>>tmp>>tmp1;
	tmp--; tmp1--;
	v[tmp].pb(tmp1);
	v[tmp1].pb(tmp);
}

fr(i,0,n){
	if(!vis[i]){
		dfs(i,-1);
		//ws(sz);
		//ws(f);
		if( !f || sz==1 ){
			ans++;
		}
		f= 0 ;
		sz = 0;
	}
}
cout<<ans;

return 0;
}