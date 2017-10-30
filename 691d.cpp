// avvinci
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
#define ws(x) cout << #x << " = " << x << endl
#define N 1234567

ll b,cnt, m,n,tmp,q,cn,i,j,k,ans=1 ,pos,val,tmp1,a[N],cmp[N],vis[N];


vector < vector < int > >v(N);
priority_queue< int,  vector<int> , less<int>  > pq [N];
void dfs(int ver){
	if(vis[ver] == 1)	return;
	vis[ver] =1;
	cmp[ver] = cnt;
	for(auto &it:v[ver])
		dfs(it);
	pq[cnt].push(a[ver]);
}
int main(){
INP
if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}

cin>>n>>m;
fr(i,0,n){
	cin>>a[i];
}
fr(i,0,m){
	cin>>tmp>>tmp1;
	tmp--;tmp1--;
	v[tmp].pb(tmp1);
	v[tmp1].pb(tmp);
}

fr(i,0,n){
	if(vis[i] == 0){
		dfs(i);
		//ws(i);
		cnt++;

	}
}
fr(i,0,n){
	ll val = pq[cmp[i]].top();
	pq[cmp[i]].pop();
	//ws(val);
	cout<<val<<" "; 
}
return 0;
}