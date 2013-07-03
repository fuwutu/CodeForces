//4006879   Jul 3, 2013 5:53:08 PM	fuwutu	 116A - Tram	 GNU C++0x	Accepted	 15 ms	 0 KB
#include <cstdio>

int main()
{
    int n, a, b, c(0), m(0);
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d", &a, &b);
        c -= a;
        c += b;
        if (c > m)
        {
            m = c;
        }
    }

    printf("%d\n", m);
    return 0;
}
