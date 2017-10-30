#include <bits/stdc++.h>
 
using namespace std;
 
#define pb push_back
#define orta (bas + son >> 1)
#define sag (k + k + 1)
#define sol (k + k)
#define endl '\n'
#define foreach(i,x) for(type(x)i=x.begin();i!=x.end();i++)
#define FOR(ii,aa,bb) for(int ii=aa;ii<=bb;ii++)
#define ROF(ii,aa,bb) for(int ii=aa;ii>=bb;ii--)
#define mp make_pair
#define nd second
#define st first
#define type(x) __typeof(x.begin())
 
typedef pair < int ,int > pii;
 
typedef long long ll;
 
const long long linf = 1e18+5;
const int mod = (int) 1e9 + 7;
const int logN = 17;
const int inf = 1e9;
const int N = 1e6 + 5;
 
int Kx, Ky, Cx, Cy, Tx, Ty, n, x, y;
 
double pre[N], suff[N], add[N], all;
 
double dist(int x, int y, int a, int b) { return sqrt((ll) (x - a) * (x - a) + (ll) (y - b) * (y - b)); }
 
int main() {
 if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}
	scanf("%d %d %d %d %d %d", &Kx, &Ky, &Cx, &Cy, &Tx, &Ty);
 
	scanf("%d", &n);
 
	FOR(i, 1, n) {
		scanf("%d %d", &x, &y);
		double add = dist(Tx, Ty, x, y);
		all += add * 2;
		suff[i] = pre[i] = dist(Cx, Cy, x, y) - add;
		::add[i] = dist(Kx, Ky, x, y) - add;
	}
 
	pre[0] = suff[n+1] = linf;
	FOR(i, 1, n) { pre[i] = min(pre[i-1], pre[i]); }
	ROF(i, n, 1) { suff[i] = min(suff[i+1], suff[i]); }
 
	double ans = suff[1] + all;
 
	FOR(i, 1, n) 
		ans = min(ans, all + min(0.0, min(pre[i-1], suff[i+1])) + add[i]);
 
	printf("%.12lf\n", ans);
 
	return 0;
}