//4189214   Jul 27, 2013 5:01:04 PM	fuwutu	 270B - Multithreading	 GNU C++0x	Accepted	30 ms	0 KB
#include <cstdio>

int main()
{
    int n, a0, a, ascending(1);
    scanf("%d%d", &n, &a0);
    for (int i = 1; i < n; ++i)
    {
        scanf("%d", &a);
        if (a > a0)
        {
            ascending  += 1;
        }
        else
        {
            ascending = 1;
        }
        a0 = a;
    }
    printf("%d\n", n - ascending);
    return 0;
}
