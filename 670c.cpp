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
#define infl LLONG_MAX
#define fs first
#define sc second
#define ll long long int
#define fr(it,st,en) for(it=st;it<en;it++)
#define INP ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ws(x) cout << #x << " = " << x << endl
#define N 212345


ll m,n,q,cn,i,j,k,ans,w,pos,val,tmp1,cnt,f,sz,x,y,mx =-1,tmp,mn=LLONG_MAX,a[N],b[N],c[N],mx1 = -1;

string s;
map < ll ,ll > mp;
int main(){
INP
if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}
cin>>n;
fr(i,0,n)	{
	cin>>a[i];
	mp[a[i]]++;
}
cin>>m;
fr(i,0,m)
	cin>>b[i];
fr(i,0,m)
	cin>>c[i];

fr(i,0,m){
	ll v1 = mp[b[i]];

	if(mx < v1){
		ll v2 = mp[c[i]];
		mx  = v1;
		mx1 =  v2;
		ans = i ;
	}
	else if(mx == v1){
		ll v2 = mp[c[i]];
		if(mx1 < v2){
			mx1 =  v2;
			ans = i;
		}
	}
}
cout<<ans +1 ;
return 0;
}