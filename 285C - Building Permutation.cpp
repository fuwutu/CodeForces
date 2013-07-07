//4034133   Jul 7, 2013 1:47:35 PM	fuwutu	 285C - Building Permutation	 GNU C++0x	Accepted	140 ms	1100 KB
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n, a[300000];
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);

    long long result(0);
    for (int i = 0; i < n; ++i)
    {
        result += abs(i + 1 - a[i]);
    }
    printf("%I64d", result);

    return 0;
}
