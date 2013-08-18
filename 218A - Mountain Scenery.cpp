//4306429	 Aug 18, 2013 7:09:01 AM	fuwutu	 218A - Mountain Scenery	 GNU C++0x	Accepted	62 ms	0 KB
#include <cstdio>

int main()
{
    int n, k, r[201];
    scanf("%d%d%d", &n, &k, &r[0]);
    for (int i = 1; i <= n * 2; i += 2)
    {
        scanf("%d%d", &r[i], &r[i+1]);
        if (k > 0 && r[i] > r[i-1] + 1 && r[i] > r[i+1] + 1)
        {
            k -= 1;
            r[i] -= 1;
        }
    }

    printf("%d", r[0]);
    for (int i = 1; i <= n * 2; ++i)
    {
        printf(" %d", r[i]);
    }
    printf("\n");
    return 0;
}
