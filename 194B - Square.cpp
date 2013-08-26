//4339876	 Aug 26, 2013 6:25:52 PM	fuwutu	 194B - Square	 GNU C++0x	Accepted	30 ms	0 KB
#include <cstdio>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%I64d", &n);
        if ((n + 1) % 4 == 0)
        {
            printf("%I64d\n", n + 1);
        }
        else if ((n + 1) % 2 == 0)
        {
            printf("%I64d\n", n * 2 + 1);
        }
        else
        {
            printf("%I64d\n", n * 4 + 1);
        }
    }
    return 0;
}
