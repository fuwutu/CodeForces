#include<bits/stdc++.h>
using namespace std;

typedef pair<long long int , long long int> P;
#define mod 1000000007
#define all(container) container.begin(),container.end()
#define tr(container,it) for(typeof(container.begin()) it = container.begin();it!=container.end();it++)
#define sz(a) int((a).size())
#define pb push_back
#define CLR(arr) memset(arr, 0, sizeof(arr))
#define mk make_pair
#define present(container,x) ((container).find(x) != (container).end())
#define inf 123456789123456
#define fs first
#define sc second
#define ll long long int
#define fr(it,st,en) for(it=st;it<en;it++)
#define NL cout<<"\n";  
#define INP ios_base::sync_with_stdio(false);cin.tie(NULL);
#define what_is(x) cout << #x << " = " << x << endl
// ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
// ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
// ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
#define N 123456

// bool compare(P a, P b){ return ((a.first) >  (b.first) ); }
//ll ord[123456],a[123456],f[123456],p[123456],s[123456];
// // ll find (ll u ){
// //     if(p[u]!=u)
// //         return(find(p[u]));
// //     return u;
// // }
// void  merge (ll u, ll v){
//     ll y = find(u);
//     ll yy = find(v);
//     p[yy] = y;
//     s[y] = s[yy] + s[y];
// }
//std::priority_queue<P, std::vector< P >, decltype(&compare)> pq(&compare);

ll m,mx=-1,i,j,n,tmp,p,q,cnt,vis[N],cmp[N],mrk[N],inp[N],pm;
 vector< vector < ll> >  g(N);
// struct sort_pred {
//     bool operator()(const  ll &left, const ll &right) {
    	
//         if(deg[left]%2 != deg[right]%2){
//         	if(deg[left]%2==1)
//             return false;
//             else 
//             return true;
// 		}
//         return ((deg[left]%2 == deg[right]%2 ) && (deg[left] > deg[right]));
//     }  };
vector< vector < ll > > v(N),v1(N),vr(N);
vector< ll > ans;
void dfs(ll u , ll dc){
    if(vis[u])  return;
    vis[u] = 1;
    cmp[u] = dc;
    if(mrk[u])
    vr[cmp[u]].pb(u);
    for(auto &it:g[u]){
        dfs(it,dc);
    }
    if(mrk[u])
    v[cmp[u]].pb(u);
}
int main(){
INP
freopen("inp.txt","r",stdin);
cin>>n>>m;
fr(i,0,m){
    cin>>p>>q;
    g[p].pb(q);
    
}

fr(i,0,n){
	cin>>tmp;
	if(mrk[tmp]==0)
	pm++;
	mrk[tmp] =1;
	
	inp[i] =tmp;
//	v1[cmp[tmp]].insert(tmp);
}

fr(i,1,n+1){
    if(!vis[i]){
        dfs(i,cnt++);
    }
   // v1[cmp[i]].pb(i);
    
}
fr(i,0,n){
	if(!v1[cmp[inp[i]]].empty() ){
		auto it1  = v1[cmp[inp[i]]].end();
		it1--;
		if(*it1 == inp[i])
			continue;
	}
	v1[cmp[inp[i]]].pb(inp[i]);	
}
fr(i,0,cnt){
//	 	what_is(i);
//	 	for(auto &it : v1[i])
//   				 cout<<it<<endl;NL;
//   				  for(auto &it : v[i])
//   				 cout<<it<<endl;NL;
//   				 for(auto &it : vr[i])
//   				 cout<<it<<endl;NL;
    if(v1[i] == vr[i] ){
        ans.insert(ans.end(),v[i].begin(), v[i].end());
    }
//    else if(v1[i] == vr[i]  ){
//        ans.insert(ans.end(),v[i].begin(), v[i].end());
//    }
   else{
  
        cout<<"-1";
        return 0 ;
    }
}
cout<<pm<<endl;
for(auto &it : ans)
    cout<<it<<endl;
return 0;
}

