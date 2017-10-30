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
#define N 112345
const long long infl = 1e18+5;

ll m,n,q,cn,i,j,k,w,pos,tmp1,cnt,f,sz,mx =-1,tmp,x,y,mx1 = -1,val,inp[N],ans=1;

string s;
int main(){
INP
if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}
cin>>s;

for(  ll i= 0 ; i< s.size() ; i++){
		if(s[i] >= 48 && s[i] <= 57){
			val = s[i] - 48;
		}
		else if( s[i] >= 65 && s[i]<=90){
			val = s[i]-'A' +10;

		}
		else if( s[i] >= 97 && s[i]<=122){
			val = s[i] -'a' + 36;

		}
		else if(s[i] == '-'){
			val =62 ;
		}
		else if(s[i] == '_'){
				val =63;
		}
		//ws(val);

		for(  ll it1= 0 ; it1< 6 ; it1++){
			int vv= val & (1<<it1) ;
				//ws(vv);
				if(vv == 0){

					ans = (ans*3 )%mod;
				}


		}

}
cout<<ans;


return 0;
}