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
vector< int > ans;
double d1;
string s;
bool pr[110];
void prim(){

	for(  ll it= 1 ; it< 101 ; it++){
			pr[it] = true;
	}
	pr[2] = true;
	int it1 =2;
while(it1 < 101){
	if(pr[it1]){
		ans.pb(it1);
		for(  ll it= 2*it1 ; it< 101 ; it += it1){
			pr[it] = false;
		}
	
	}
	it1++;
		
}


}
int main(){

prim();
fr(i,0,5){
	cout<<ans[i]<<endl;
	fflush(stdout);
	cin>>s;
	if(s == "yes"){
		f=i+1;
		break;
	}
}
int cf  = ans[f-1];

if(f==0){
	cout<<"prime"<<endl;
	fflush(stdout);
}
else{
	if(cf*cf <  101){
		cout<<cf*cf<<endl;
		fflush(stdout);
		cin>>s;
		if(s == "yes"){
		f=i+1;
	cout<<"composite"<<endl;
	fflush(stdout);
	return 0 ;
	}
	}
	
	
	fr(i,f,100){
	cout<<ans[i]<<endl;
	fflush(stdout);
	cin>>s;
	if(s == "yes"){
		f=i+1;
	cout<<"composite"<<endl;
	fflush(stdout);
	return 0 ;
	}
	if(cf*ans[i] > 100){
			cout<<"prime"<<endl;
			fflush(stdout);
			return 0 ;
	}
		
	}

}
return 0;
}
