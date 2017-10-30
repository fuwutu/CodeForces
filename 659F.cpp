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
#define N 1234

ll b,cnt, m,n,tmp,q,cn,i,j,k,ans,w,w1 ,pos,val,tmp1,f = 0,sz, mrk[N][N],a[N][N],vis[N][N],vis2[N][N];
struct sort_pred {
    bool operator()(const  pair< P , ll >   &left, const pair< P , ll >   &right) {
    	
    	return left.sc < right.sc ; 
    }  };

//     struct cmp
// {
//     bool operator()(pair< P , ll > a, pair< P , ll > b)
//     {
         
//             return a.sc  < b.sc;
//     }
// };

vector< pair< P , ll >  > v,v1,v2;

void dfs( int x ,int y){
	if(x< 0 || y < 0 || x >=n || y >= m ) return ; 
	if(vis[x][y] || a[x][y] == 0 ) return ;
	vis[x][y] = 1;
	v.pb( mk ( mk(x,y) , a[x][y]) );
	dfs(x+1,y);
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x,y-1);
}

void dfs2( int x , int y  , ll yy){
		if(x< 0 || y < 0 || x >=n || y >= m ) return ; 
		if(vis2[x][y] || a[x][y] < yy  ) return ;
	vis2[x][y] = 1;
	v2.pb( mk ( mk(x,y) , a[x][y]) );
	dfs2(x+1,y,yy);
	dfs2(x-1,y,yy);
	dfs2(x,y+1,yy);
	dfs2(x,y-1,yy);
}
int main(){
INP
if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}

cin>>n>>m>>k;
fr(i,0,n){
	fr(j,0,m){
		cin>>a[i][j];
		if(a[i][j]!=0)
			v1.pb(mk( mk(i,j) , a[i][j]));
	}
}

sort(all(v1),sort_pred()) ; 

fr(w1,0,v1.size()){
	i = v1[w1].fs.fs;
	j = v1[w1].fs.sc;
	//ws(v1[w1].sc);
	if(!vis[i][j]){
		dfs(i,j);
		sort(all(v),sort_pred()) ; 
		fr(w,0,v.size()){
			
			if(v[w].sc * (v.size() - w ) >= k &&  k%v[w].sc==0){
			   //  ws(v[w].fs.fs);
			   //  ws(v[w].fs.sc);
			   // ws(v[w].sc);
			    v2.clear();
			    dfs2(v[w].fs.fs, v[w].fs.sc,v[w].sc);
			   // ws(v2.size());
	            if(v2.size()*v[w].sc <  k) continue;
	            f= 1;
	            val = v[w].sc;
	            ll it =0;
	            while(it < v2.size()){
	                 mrk[v2[it].fs.fs][v2[it].fs.sc] = 1;

	                 it++;
	                 if(it * v[w].sc == k ) break;
	                }
	                w = v.size();
				}
				//a[i][j] =0;
			}
			v.clear();
		}
	if(f) break;
}


if(!f){
	cout<<"NO";
}
else{
	cout<<"YES\n";
	fr(i,0,n){
		fr(j,0,m){
			if(mrk[i][j])
				cout<<val<<" ";
			else
				cout<<"0 ";
		}
		cout<<"\n";
	}
}
return 0;
}