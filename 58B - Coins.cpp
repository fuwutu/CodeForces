//4240179   Aug 7, 2013 4:19:54 PM	fuwutu	 58B - Coins	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    while (n != 1)
    {
        printf("%d ", n);
        for (int i = 2; i <= n; ++i)
        {
            if (n % i == 0)
            {
                n /= i;
                break;
            }
        }
    }
    printf("%d\n", n);
    return 0;
}
