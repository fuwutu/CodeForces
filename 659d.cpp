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
#define fs first
#define sc second
#define ll long long int
#define fr(it,st,en) for(it=st;it<en;it++)
#define INP ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ws(x) cout << #x << " = " << x << endl
#define N 123456

ll b,cnt, m,n,tmp,q,cn,i,j,k,ans,pos,val,tmp1,f = 0,a;

int main(){
INP
if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}

cin>>m;
int dir = 1 ;
int oa ,ob,sa,sb; 
cin>>sa>>sb;
cin>>oa>>ob;

fr(i,0,m-1){
	cin>>a>>b;
	if(a - oa == 0){
		if(b > ob){
			if(dir == 2)
				ans++;
			dir  = 1;
		}
		if(b < ob){
			if(dir == 4)
				ans++;
			dir =3;
		}
	}
	else{
		if(a > oa){
			if(dir == 3)	ans++;
			dir =2;
		}
		else{
			if(dir ==1 )  ans++;
			dir =4;
		}
	}

	oa =a;
	ob =b;
}
cout<<ans;

return 0;
}