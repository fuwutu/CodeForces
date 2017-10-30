// avvinci
//#include"prettyprint.hpp"
#include<bits/stdc++.h>
using namespace std;

typedef pair<long long int , long long int> P;
#define mod 1000000007 
#define MOD 1000000007
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
#define N 300005
const long long infl = 1e18+5;

ll m,n,q,cn,k,w,pos,tmp1,sz,mx =-1,tmp,mx1 = -1,val,sm,a,b,c,d,mn = infl ,cnt=1,k1,ans,p,x;
//vector< vector< int > > g(N);
//ll cons[N][N] ,dp[N][N][11];
double d1;
//string s,t;
void mul(ll mat[2][2] ,ll m2 [2][2]){
		ll res[2][2];
	int i,j,k;
	fr(i,0,2){
		fr(j,0,2){
			res[i][j] = 0;
			fr(k,0,2){
				res[i][j] =  (res[i][j] + (mat[i][k]*m2[k][j])%mod)%mod ; 
			}

		}
	}
 	fr(i,0,2)
		fr(j,0,2)
			mat[i][j] =res[i][j];

}
 void powmod( ll mat[2][2] , ll p1 ){
 	 ll res[2][2];
 	int i,j;
 	res[0][0] = 1LL;
 	 res[1][1] =1LL;
 	res[0][1] = 0LL;
 	res[1][0] = 0LL; 

 	while(p1 > 0 ){
 		if(p1 & 1){
 			mul(res,mat);
 			
 		}
 		mul(mat,mat);
 		p1 /=2;
 	}
 	fr(i,0,2)
 		fr(j,0,2)
 			mat[i][j] =res[i][j];


 }


int main(){
INP
if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}
cin>>a>>b>>n>>x;
ll mat[2][2];
mat[0][0] =a;
mat[0][1] =b;
mat[1][0] = 0;
mat[1][1] =1;

powmod(mat ,n);

cout << ((mat[0][0]*x)%mod  + mat[0][1]) %mod ; 




return 0;
}