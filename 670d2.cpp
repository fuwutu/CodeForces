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
#define infl LLONG_MAX
#define fs first
#define sc second
#define ll long long int
#define fr(it,st,en) for(it=st;it<en;it++)
#define INP ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ws(x) cout << #x << " = " << x << endl
#define N 112345


ll m,n,q,cn,i,j,k,ans,w,pos,val,tmp1,cnt,f,sz,x,y,mx =-1,tmp,mn=LLONG_MAX,a[N],b[N],c[N],mx1 = -1;

string s,sq;
char ch;
list<char> ls;

int main(){
INP
if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}
cin>>n>>m>>k;
fr(i,0,n)
{
	cin>>ch;
	ls.push_back(ch);
}
cin>>sq;
auto pos = ls.begin();
advance(pos,k-1);
fr(i,0,m){

	if(sq[i]=='R') pos++;
	else if(sq[i]== 'L') pos-- ;
	else{
		if( *pos == '('){
			auto cpos = pos;
			cpos++;
			cnt = 1;
			while(cnt !=0){
				if(*cpos == ')')
					cnt--;
				else 
					cnt++;
				auto cc = cpos;
				cpos++;
				ls.erase(cc);								
			}

		}
		else{
			auto cpos =pos ;
			cpos--;
			cnt =-1;
			while(cnt !=0){
				if( *cpos == ')')
					cnt--;
				else 
					cnt++;
				auto cc = cpos;
				cpos--;
				ls.erase(cc);				
			}
	
		}

	auto npos = pos;
	npos++;
	if(npos == ls.end()){
		npos--;
		npos--;
	}
	ls.erase(pos);
	pos =npos;

	}

}

for(std::list<char>::iterator it1 = ls.begin(); it1 != ls.end(); it1++)
cout<<*it1;
return 0;
}