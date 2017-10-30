// avvinci
#include"prettyprint.hpp"
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
#define N 112345
const long long infl = 1e18+5;

ll m,n,q,cn,i,j,k,w,pos,tmp1,cnt,f,sz,mx =-1,tmp,x,y,mx1 = -1,val,inp[N];
struct node {
	ll lt; 
	ll rt;
	ll val;
}a[N];
ll t= 1;
map < ll ,ll > mp;
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



a[0].val = inp[0];
a[0].lt = -1;
a[0].rt  = - 1;


fr(i,1,n){

	ll st = 0;
	while(1){
	//	ws(st);

		if(inp[i] < a[st].val){
			if(a[st].lt !=-1)
				st = a[st].lt;
			else{
				a[st]. lt = t++;
				break;
			}
		}
		else{
			if(a[st].rt !=-1)
				st = a[st].rt;
			else{
				a[st].rt =t++;
				break;
			}

		}
	}
	a[t-1].val = inp[i];
	a[t-1].lt = -1;
	a[t-1].rt = -1;
	mp[inp[i]] = st;



}
ws(mp);
fr(i,1,n){
	cout<< inp[ mp[inp[i]] ] <<" ";
}



return 0;
}