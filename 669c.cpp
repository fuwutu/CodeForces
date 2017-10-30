#include<bits/stdc++.h>
using namespace std;

typedef pair<long long int , long long int> P;
#define mod 1000000007
#define all(container) container.begin(),container.end()
#define tr(container,it) for(typeof(container.begin()) it = container.begin();it!=container.end();it++)
#define sz(a) int((a).size())
#define pb push_back
#define CLR(arr) memset(arr, 0, sizeof(arr))
#define mk make_pair
#define present(container,x) ((container).find(x) != (container).end())
#define inf 123456789123456
#define fs first
#define sc second
#define ll long long int
#define fr(it,st,en) for(it=st;it<en;it++)
#define NL cout<<"\n";  
#define INP ios_base::sync_with_stdio(false);cin.tie(NULL);
#define what_is(x) cout << #x << " = " << x << endl
// ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
// ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
// ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
#define N 12345

// bool compare(P a, P b){ return ((a.first) >  (b.first) ); }
//ll ord[123456],a[123456],f[123456],p[123456],s[123456];
// // ll find (ll u ){
// //     if(p[u]!=u)
// //         return(find(p[u]));
// //     return u;
// // }
// void  merge (ll u, ll v){
//     ll y = find(u);
//     ll yy = find(v);
//     p[yy] = y;
//     s[y] = s[yy] + s[y];
// }
//std::priority_queue<P, std::vector< P >, decltype(&compare)> pq(&compare);

ll m,mx=-1,i,j,n,tmp,ans,q ,a[102][102],t[N],val[N],ind1[N],ind2[N];
// vector< set < ll> >  g(210);
// struct sort_pred {
//     bool operator()(const  ll &left, const ll &right) {
    	
//         if(deg[left]%2 != deg[right]%2){
//         	if(deg[left]%2==1)
//             return false;
//             else 
//             return true;
// 		}
//         return ((deg[left]%2 == deg[right]%2 ) && (deg[left] > deg[right]));
//     }  };

int main(){
INP
//freopen("inp.txt","r",stdin);
cin>>n>>m>>q;
fr(i,0,q){
    cin>>t[i]>>ind1[i];
    if(t[i]==3)
    {
        cin>>ind2[i]>>val[i];
    }
    
}
for(i=q-1;i>=0;i--){
    if(t[i] == 1){
        tmp = a[ind1[i]][m];
        for(j=m;j>=2;j--){
            a[ind1[i]][j] = a[ind1[i]][j-1];
            
        }
         a[ind1[i]][1] = tmp;
        
    }
    else if(t[i]== 2){
        tmp = a[n][ind1[i]];
         for(j=n;j>=2;j--)
            a[j][ind1[i]] = a[j-1][ind1[i]];
        a[1][ind1[i]] = tmp;
    }
    else{
    	//what_is(ind1[i]);
    	//	what_is(ind2[i]);
    	//		what_is(val[i]);
        a[ind1[i]][ind2[i]] = val[i];
    }
}
fr(i,1,n+1){
    fr(j,1,m+1){
        cout<<a[i][j]<<" ";
    }
    NL;
}
return 0;
}

