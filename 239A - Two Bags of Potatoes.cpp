//4057974   Jul 13, 2013 9:21:57 AM	fuwutu	 239A - Two Bags of Potatoes	 GNU C++0x	Accepted	62 ms	0 KB
#include <cstdio>

int main()
{
    int y, k, n;
    scanf("%d%d%d", &y, &k, &n);
    int x = k - y % k;
    int top = n - y;
    if (x <= top)
    {
        printf("%d", x);
        x += k;
        while (x <= top)
        {
            printf(" %d", x);
            x += k;
        }
        printf("\n");
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
