//4362875	 Aug 28, 2013 7:34:17 PM	fuwutu	 339B - Xenia and Ringroad	 GNU C++0x	Accepted	62 ms	0 KB
#include <cstdio>

int main()
{
    int n, m, a0, a, cycle = 0;
    scanf("%d%d%d", &n, &m, &a0);
    while (--m)
    {
        scanf("%d", &a);
        if (a0 > a)
        {
            cycle += 1;
        }
        a0 = a;
    }
    printf("%I64d\n", static_cast<long long>(n) * static_cast<long long>(cycle) + a0 - 1);
    return 0;
}
