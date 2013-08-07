//4238335   Aug 7, 2013 5:09:13 AM	fuwutu	 257A - Sockets	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <cstdio>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    int n, m, k, a[50];
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }

    sort(a, a + n, greater<int>());
    int filters(0), plug(k);
    while (filters < n && plug < m)
    {
        plug += a[filters] - 1;
        filters += 1;
    }
    printf("%d\n", plug >= m ? filters : -1);
    return 0;
}
