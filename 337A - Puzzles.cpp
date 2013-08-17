//4300351 	Aug 17, 2013 4:18:19 AM 	fuwutu 	337A - Puzzles 	GNU C++0x 	Accepted 	30 ms 	0 KB
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, f[1000];
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> f[i];
    }
    sort(f, f + m);
    int least = f[n-1] - f[0];
    for (int i = 1; i <= m - n; ++i)
    {
        if (f[i+n-1] - f[i] < least)
        {
            least = f[i+n-1] - f[i];
        }
    }
    cout << least << endl;
    return 0;
}
