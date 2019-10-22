#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
#define Mod 1000000007
lli countntfg( vector<vector<lli>>&grid, lli h, lli w){
    lli count = 0;
    for(lli i = 0; i < h; i++){
        for(lli j = 0; j < w; j++){
            if(grid[i][j] == -1){
                count++;
            }
        }
    }
    return count;
}
lli powr(lli a, lli x)
{
	ll res =  1;
	while (x)
	{
		if (x & 1) res = res * (ll)a % Mod;
		a = (ll)a*(ll)a % Mod;
		x >>= 1;
	}
	return res;
}
int main(){
    lli h, w; cin >> h >> w;
    vector<vector<lli>>grid(h+1 , vector<lli>(w+1 , -1));
    lli hv[h]; lli wv[w];

    for (int i = 0; i < h; i++)
    {
        cin >> hv[i];
    }
    for (int i = 0; i < w; i++)
    {
        cin >> wv[i];
    }

    for (lli i = 0; i < h; i++)
    {
        for(int j = 0; j < hv[i] && j < w; j++){
            grid[i][j] = 1;
        }
        if(hv[i] < w)
            grid[i][hv[i]] = 0;
    }
    for (lli i = 0; i < w; i++)
    {   
        for(int j = 0; j < wv[i] && j < h; j++){
            if(grid[j][i] == 0){
                cout << "0" << endl;
                return 0;
            }
            grid[j][i] = 1;
        }
        if(wv[i] < h){
            if(grid[wv[i]][i] == 1){
                cout << "0" << endl;
                return 0;
            }
            grid[wv[i]][i] = 0;
        }
    }
    lli ntfg = countntfg(grid, h, w)%Mod;
    lli sum = (lli)(powr(2, ntfg)) % Mod;
    cout << sum << endl;
    return 0;
}