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
ll m,n,q,cn,i,j,k,w,pos,tmp1,cnt,f,sz,mx =-1,tmp,x[N],y[N],mx1 = -1;
ll ax,ay,tx,ty,bx,by;
double sm = 0 ,val,da[N],dbp[N],dbs[N],ans;
double dist( ll x1 ,ll y1 ,ll x2 , ll y2){
	double ff = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
	return sqrt(ff);
}
int main(){
INP
if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}
cin>>ax>>ay>>bx>>by>>tx>>ty;
cin>>n;
fr(i,1,n+1)
{
	cin>>x[i]>>y[i];
	val = dist(tx,ty,x[i],y[i]);
	sm += val;
	da[i] = dist(ax,ay,x[i],y[i]) - val;
	dbs[i] = dist(bx,by,x[i],y[i]) - val ;
	dbp[i] = dbs[i];

}
sm = sm*2;
dbp[0] = infl;
dbs[n+1] = infl;

fr(i,1,n+1) {
	dbp[i] = min(dbp[i],dbp[i-1]);

}
ans = sm + dbp[n];

for(i =n ;i >=1;i--)
	dbs[i] = min(dbs[i],dbs[i+1]);

fr(i,1,n+1){
	ans = min(ans , sm + min(0.0 , da[i]+min(dbp[i-1], dbs[i+1])));
}
 cout<<fixed<<setprecision(12);
cout<<ans;






return 0;
}