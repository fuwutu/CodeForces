// avvinci
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
#define ws(x) cout << #x << " = " << x << endl
//ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
// ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
// ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
#define N 1234567


ll a,b,t,cnt =1, m,n,tmp,q,cn,i,j,k,ans ,pos,tmp1,f =1;


// bool compare(P a, P b)
// {
//     return a.fs>b.fs;
// }

string s;
std::vector<char> v = {'A','I','H','M','O','o','T','U','V','v','W','w','X','x','Y'};

int main(){
INP
if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}
cin>>s;
n= s.size();
fr(i,0,s.size()){

    if(s[i] != s[n-1-i] && !( (s[i]=='b' && s[n-1-i] == 'd') || (s[i]=='d' && s[n-1-i] == 'b') ) && !( (s[i]=='p' && s[n-1-i] == 'q') || (s[i]=='q' && s[n-1-i] == 'p') )  ){
        f= 0;
       // ws(i);
    } 
    else if(s[i]== s[n-1-i] && (find(all(v),s[i]) == v.end() ) ){
        f=0;
    }


}

if(f){
    cout<<"TAK";
}
else cout<<"NIE";

return 0;
}