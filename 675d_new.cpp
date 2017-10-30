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
#define inf 3123456789
#define  infn -3123456789
//#define infl LLONG_MAX
#define fs first
#define sc second
#define ll long long int
#define fr(it,st,en) for(it=st;it<en;it++)
#define INP ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ws(x) cout << #x << " = " << x << endl
#define N 112345
const long long infl = 1e18+5;

ll m,n,q,cn,i,j,k,w,pos,tmp1,cnt,f,sz,mx =-1,tmp,x,y,mx1 = -1,val,inp[N];
ll t= 1;
map < P , ll  > mp;
set<ll> s;
int main(){
INP
if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}
cin>>n;

fr(i,0,n)	{
	cin>>inp[i];
}

s.insert(inp[0]);
mp[mk(inp[0],inf)] = inp[0];
mp[mk( infn,inp[0])] = inp[0];

ll lt,rt;
fr(i,1,n){
	s.insert(inp[i]);
	auto it  = s.find(inp[i]);
	if(it == s.begin())
		lt = infn;
	else{
		it--;
		lt  = *it;
		it++;
	}
	it++; 
	if(it == s.end())
		rt = inf ;
	else
		rt  = *it;
	// ws(lt);
	// ws(rt);
	val  = mp[ mk ( lt,rt )];
	map < P , ll  >::iterator it1 = mp.find(mk(lt,rt));
	   assert(it1!=mp.end());
	cout<< val<<" ";
	mp[mk(lt,inp[i])]  = inp[i];
	mp[mk(inp[i] ,rt)] = inp[i];

	mp.erase(it1);


}





return 0;
}