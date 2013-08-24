//4331596	 Aug 24, 2013 12:22:08 PM	fuwutu	 336C - Vasily the Bear and Sequence	 GNU C++0x	Accepted	 124 ms	 400 KB
#include <cstdio>

int main()
{
    int n, a[100000], count[32] = {0};
    bool b[32][32] = {false};
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        int x = a[i], index = 0, zero[32], zerocount = 0;
        while (x != 0)
        {
            if (x % 2 == 1)
            {
                count[index] += 1;
                for (int j = 0; j < zerocount; ++j)
                {
                    b[index][zero[j]] = true;
                }
            }
            else
            {
                zero[zerocount++] = index;
            }
            x /= 2;
            index += 1;
        }
    }

    int v = 31;
    for (;;)
    {
        int j = 0;
        for (; j < v; ++j)
        {
            if (!b[v][j])
            {
                break;
            }
        }
        if (j == v)
        {
            break;
        }
        --v;
    }
    int k = count[v];
    printf("%d\n", k);

    int pv = 1 << v;
    for (int i = 0; i < n; ++i)
    {
        if ((a[i] & pv) != 0)
        {
            printf((--k != 0 ? "%d " : "%d\n"), a[i]);
        }
    }

    return 0;
}
