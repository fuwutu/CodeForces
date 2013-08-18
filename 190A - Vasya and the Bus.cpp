//4306482	 Aug 18, 2013 7:22:51 AM	fuwutu	 190A - Vasya and the Bus	 GNU C++0x	Accepted	30 ms	0 KB
#include <cstdio>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    if (n != 0 || m == 0)
    {
        printf("%d %d\n", (m > n ? m : n), (m != 0 ? n + m - 1 : n));
    }
    else
    {
        printf("Impossible\n");
    }
    return 0;
}
