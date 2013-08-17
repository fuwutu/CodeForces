//4304346	 Aug 17, 2013 7:38:25 PM	fuwutu	 254A - Cards with Numbers	 GNU C++0x	Accepted	530 ms	4800 KB
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    scanf("%d", &n);

    pair<int, int>* x = new pair<int, int>[n * 2];
    for (int i = 0; i < n * 2; ++i)
    {
        scanf("%d", &x[i].first);
        x[i].second = i + 1;
    }

    sort(x, x + n * 2);
    bool possible = true;
    for (int i = 0; i < n * 2; i += 2)
    {
        if (x[i].first != x[i+1].first)
        {
            possible = false;
            break;
        }
    }

    if (possible)
    {
        for (int i = 0; i < n * 2; i += 2)
        {
            printf("%d %d\n", x[i].second, x[i+1].second);
        }
    }
    else
    {
        printf("-1\n");
    }

    delete[] x;
    return 0;
}
