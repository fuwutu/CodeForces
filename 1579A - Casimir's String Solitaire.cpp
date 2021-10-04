#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

#define lli long long int
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define mii map<ll, ll>
#define msi map<string, ll>
#define mis map<ll, string>
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define repr(i, a, b) for (ll i = b - 1; i >= a; i--)
#define trav(a, x) for (auto &a : x)
#define pii pair<ll, ll>
#define vi vector<ll>
#define vii vector<pair<ll, ll>>
#define vs vector<string>
#define all(a) (a).begin(), (a).end()
#define F first
#define S second
#define sz(x) (ll) x.size()
#define hell 1000000007
#define lbnd lower_bound
#define ubnd upper_bound

/*    For Debugging    */
#define DEBUG cerr << "\n>>>I'm Here<<<\n" \
                   << endl;
#define display(x)               \
    trav(a, x) cout << a << " "; \
    cout << endl;
#define what_iss(x) cerr << #x << " = " << x << endl;
#define what_is(x) cerr << #x << " = " << x << " ";

std::mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define TIME cerr << "\nTime elapsed: " << setprecision(5) << 1000.0 * clock() / CLOCKS_PER_SEC << "ms\n";
#define DECIMAL(n) \
    cout << fixed; \
    cout << setprecision(n);
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

using namespace std;
#define PI 3.141592653589793
#define N 100005
#define K 100000000
const lli mod = 1e9 + 7;
lli gcd(lli a, lli b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

lli power_mod(lli a, lli n)
{
    lli res = 1;
    while (n > 0)
    {
        if (n & 1)
            res = ((res % mod) * (a % mod)) % mod, n--;
        else
            a = ((a % mod) * (a % mod)) % mod, n /= 2;
    }
    return res;
}

lli nCr(lli n, lli r)
{
    if (r > n)
        return 0;

    double res = 1;
    for (lli i = 1; i <= r; i++)
        res = (res * (n - r + i)) / i;
    return (lli)(res + 0.01);
}
/********
#define N 1000001
lli fac[N];
void factorial_mod()
{
    fac[0]=fac[1]=1;
    rep(i,2,N)
    fac[i]=((fac[i-1]%mod)*(i%mod))%mod;
}
 
lli nCr_mod(lli n,lli r)
{
    lli res=1;
    res=fac[n]%mod;
    res=((res%mod)*(power_mod(fac[r],mod-2)%mod))%mod;
    res=((res%mod)*(power_mod(fac[n-r],mod-2)%mod))%mod;
   
    return res%mod;
}
**********/
/***********
#define N 10000001
 
bool prime[N];
void sieve()
{
    prime[0]=prime[1]=true;
    for(lli i=2;i*i<N;i++)
    {
        if(prime[i]==false)
        {
            for(lli j=i*i;j<N;j+=i)
            prime[j]=true;
        }
    }
}
//if n is prime then prime[n]=false;
 
**********/

// vector<int> prime(int n){
//     int lp[n+1] = {0};
//     vector<int> pr;

//     for(int i = 2;i<=n;i++){
//         if(lp[i] == 0){
//             lp[i] = i;
//             pr.push_back(i);
//         }

//         for(int j = 0;j<pr.size() &&
//         pr[j] <= lp[i] && i * pr[j] <= n;j++){
//             lp[i*pr[j]] = pr[j];
//         }
//     }
//     return pr;
// }

ll dist(ll x1, ll y1, ll x2, ll y2)
{
    ll d = sqrt(pow(y1 - y2, 2) + pow(x1 - x2, 2));
    return d;
}
bool comp(pair<ll,ll> p1,pair<ll,ll> p2){
    return p1.first < p2.first;
}

void solve()
{
   string s;
   cin >> s;

   ll a = 0;
   ll b = 0;
   ll c = 0;
   for(auto it:s){
       if(it == 'A')a++;
       else if(it == 'B')b++;
       else c++;
   }

   if(a + c == b){
       cout << "YES" << endl;
   }else{
       cout << "NO" << endl;
   }
}

int main()
{
    FAST;

    //  freopen("input.txt", "r", stdin);
    //	freopen("output.txt", "w", stdout);
    
    int t;
    cin >> t;
    while (t--)
    solve();
    // TIME;
}