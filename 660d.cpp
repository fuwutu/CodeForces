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
#define N 112345
const long long infl = 1e18+5;

ll m,n,q,cn,i,j,k,w,pos,tmp1,cnt[26],f,sz,mx =-1,tmp,mx1 = -1,val,ans,t,c,sm;
string a,b;
vector< char > ans1;
double d1;



int main(){
INP
if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}
cin>>a>>b;
int st = 0 ,en = a.sz , beg =-1,fin =-1;
fr(i,0,a.sz){
	cnt[a[i]-'a']++;
}
fr(i,0,b.sz){
	if(cnt[b[i]-'a'] == 0 ){
			if(beg == -1){
				beg = i;
			}
			fin =i+1;
	}
	else{
		while(a[st]!= b[i] && st < a.sz){
			st++;
		}
		if(st >= a.sz){
			if(beg == -1){
				beg = i;
			}

			fin =i+1;
		}
		else
			cnt[b[i]-'a']--;
		st++;

	}
	//ws(st);
}
// ws(beg);
// ws(fin);
ll len1  = fin -  beg ;
fr(i,0,b.sz){
		if( i >= beg  && i < fin) continue;
			ans1.pb(b[i]);
}
///ws(ans1);
 reverse(all(b));
// ws(b);
st = 0 ;en = a.sz ; beg =-1;fin =-1;
fr(i,0,b.sz){
	if(cnt[b[i]-'a'] == 0 ){
			if(beg == -1){
				beg = i;
			}
			fin =i+1;
	}
	else{
		while(a[st]!= b[i] && st < a.sz){
			st++;
		}
		if(st >= a.sz){
			if(beg == -1){
				beg = i;
			}

			fin =i+1;
		}
		else
			cnt[b[i]-'a']--;
		st++;

	}
//	ws(st);
}
// ws(beg);
// ws(fin);
ll len2  = fin -  beg ;
if(len2  < len1){
	ans1.clear();
	fr(i,0,b.sz){
		if( i >= beg  && i < fin) continue;
	ans1.pb(b[i]);
	}
	reverse(all(ans1));
}
fr(i,0,ans1.sz){
	cout<<ans1[i];
}
if(ans1.empty()){
	cout<<"-";
}

return 0;
}