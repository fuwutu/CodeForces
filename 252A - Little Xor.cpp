//4304419	 Aug 17, 2013 7:55:55 PM	fuwutu	 252A - Little Xor	 GNU C++0x	Accepted	30 ms	0 KB
#include <cstdio>

int main()
{
    int n, a, x[101] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &a);
        x[i] = x[i-1] ^ a;
    }
    int maximal = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            int xx = x[i] ^ x[j];
            if (xx > maximal)
            {
                maximal = xx;
            }
        }
    }
    printf("%d\n", maximal);
    return 0;
}
