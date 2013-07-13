//4058029   Jul 13, 2013 9:37:53 AM	fuwutu	 246B - Increase and Decrease	 GNU C++0x	Accepted	 15 ms	 0 KB
#include <cstdio>

int main()
{
    int n, a, sum(0);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a);
        sum += a;
    }
    printf("%d\n", sum % n == 0 ? n : n - 1);
    return 0;
}
