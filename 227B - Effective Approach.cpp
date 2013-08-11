//4263447   Aug 11, 2013 5:48:07 AM 	fuwutu 	227B - Effective Approach 	GNU C++0x 	Accepted 	92 ms 	400 KB
#include <cstdio>

int main()
{
    int n, a, index[100001];
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &a);
        index[a] = i;
    }

    int m, b;
    scanf("%d", &m);
    long long Vasya(0), Petya(0);
    while (m--)
    {
        scanf("%d", &b);
        Vasya += index[b];
        Petya += (n + 1 - index[b]);
    }
    printf("%I64d %I64d\n", Vasya, Petya);
    return 0;
}
