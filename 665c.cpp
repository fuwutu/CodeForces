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
#define N 312345
const long long infl = 1e18+5;

ll m,n,q,cn,i,j,k,w,pos,tmp1,cnt,f,sz,mx =-1,tmp,mx1 = -1,val,t,c,sm;
//vector< vector< int > > g(N),ans;
//int inp[N],vis[N];
double d1;
string s;
int main(){
INP
if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}
cin>>s;
//cout<<s;
fr(i,1,s.sz){
	if(s[i] == s[i-1] ){
		s[i] = (char) (97+( s[i-1]+1)%26);
		//ws(s[i]);
		//ws(s[i+1]);
		if(i < s.sz-1 && s[i] == s[i+1])
			s[i] = (char) (97+( s[i+1]+1)%26);
	}
}
cout<<s;
return 0;
}