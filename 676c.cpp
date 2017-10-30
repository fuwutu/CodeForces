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

ll m,n,q,cn,k,w,pos,tmp1,cnt,f,sz,mx =-1,tmp,x,y,mx1 = -1,val,inp[N];
string s;


int ok(ll len){
	ll i,j ;
	 ll c1 =0 ,c2 = 0;	

	fr(i,0,len){
		if(s[i] == 'a')
				c1++;
			else
				c2++;
		

	}
	if(min(c1,c2 ) <= k)
			return 1;
	fr(i,len,n){

		if(s[i] == 'a')
			c1++;
		else
			c2++;
		if(s[i-len] == 'a')
			c1--;
		else
			c2--;
		if(min(c1,c2 ) <= k)
			return 1;
			


	}
	return 0 ;
}
int main(){
INP
if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}
cin>>n>>k;
cin>>s;


ll low =1 , high = n ,mid ,ans  =-1;

while(low <= high){

	mid = low + (high-low)/2;

	if(ok(mid)){
		ans =mid;
		low = mid+1;
	}
	else
	{
		high = mid-1;
	}
	//ws(mid);
}
cout<<ans;

return 0;
}