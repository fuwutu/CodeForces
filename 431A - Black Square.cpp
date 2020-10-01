#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define para(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define paraIni(X,S,Y) for (int (X) = S;(X) < (Y);++(X))
#define rpara(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define all(X) (X).begin(),(X).end()
#define rall(X) (X).rbegin(),(X).rend()
#define unicos(X) (X).erase(unique(all(X)),(X).end())
#define NL <<"\n"
#define EPS 1e-6
#define MOD 1000000007
#define iinf 0x3f3f3f3f
#define llinf 0x3f3f3f3f3f3f3f3f
#define ll long long
#define pii pair<int, int>
#define pll pair<long, long>
using namespace std;



int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int v[4];
    v[0]=a;v[1]=b;v[2]=c;v[3]=d;
    string s;
    cin >> s;
    ll ans=0;
    for (int i = 0; i < s.size(); ++i)
    {
        ans+=v[s[i]-'1'];

        
    }
    cout << ans << endl;
  
    return 0;
}