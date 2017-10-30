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
#define N 12345


ll b,m,n,q,cn,i,j,k,ans,w,pos,val,tmp1,cnt,f,sz,x,y,mx =-1,tmp,mn=LLONG_MAX,dp[N][4];

string s;
char c1;
map< string , int > mp;
set<string > st;
void rec(int ind , int stat , string sref){
	if(ind < 5)
		return;
	if(dp[ind][stat]) return; 
	string stmp  = s.substr(ind,stat);
	ws(ind);
	ws(stmp);
	if(stmp.compare(sref)!=0)
	{
		st.insert(stmp);
		//ws(stmp);
		rec(ind-3,3,stmp);
		rec(ind -2 ,2,stmp);
			dp[ind][stat] = 1;
	}

	

}
int main(){
INP
if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}
cin>>s;
n =s.size();
rec(n-3, 3 ,"*");
rec(n-2,2,"*");
//ws(mp.size());
cout<<st.size()<<"\n";
for(auto &it :st){
	cout<<it<<"\n";
}


return 0;
}