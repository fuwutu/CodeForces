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

ll expbin(ll a, ll x)

{
    if (!x)
        return 1;
    if (x&1) return (a*expbin (a,x-1)) % MOD;
    ll b = expbin(a, x/2);
    return (b*b)% MOD;
}
ll cat[1123456];
int n;
void catalan()
{
    cat[0]=1;
    for (int i = 1; i <=n; ++i)
    {
        cat[i] = 2* (2* i-1) * cat[i-1];
        cat[i] %= MOD;
        cat[i] *= expbin(i+1, MOD-2);
        cat[i] %= MOD;
    }
}
stack <int> s;

int multipop()
{
    if (s.empty())
        return 0;
    int count = 1;
    int x = s.top();
    s.pop();
    while (!s.empty() && s.top() == x)
    {
        count++;
        s.pop();
    }
    return count;

}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> n;
    int min = iinf;
    catalan();
    ll ans=1;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x<min)
            min=x;
        while (!s.empty() && s.top() > x)
        {
            ans*=cat[multipop()]; 
            ans%=MOD;           
        }
        s.push(x);
    }
    while (!s.empty() )
    {
        ans*=cat[multipop()];
        ans%=MOD; 
    }
    // printf("%d\n",s.size() );
    // ans*=
    printf("%lld\n",ans );
    // ll prev = -1;
    // ll countMin=0;
    // ll countPrev=0;

    // while (!s.empty())
    // {
    //     ll x = s.top();
    //     s.pop();
    //     if (x!= min)
    //     {
    //         int count = 1;
    //         while (!s.empty() && s.top() == x)
    //             s.pop();
    //         ans*=cout;
    //     }
    // }
  
    return 0;
}