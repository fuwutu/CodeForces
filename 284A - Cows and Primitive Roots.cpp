//4306626	 Aug 18, 2013 8:16:30 AM	fuwutu	 284A - Cows and Primitive Roots	 GNU C++0x	Accepted	62 ms	0 KB
#include <cstdio>

int main()
{
    int p, count(0);
    scanf("%d", &p);
    for (int n = 1; n < p; ++n)
    {
        bool ok = true;
        int x = 1;
        for (int i = 1; i < p - 1; ++i)
        {
            x *= n;
            x %= p;
            if (x == 1)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            x *= n;
            x %= p;
            if (x == 1)
            {
                count += 1;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}


//4306655	 Aug 18, 2013 8:36:13 AM	fuwutu	 284A - Cows and Primitive Roots	 GNU C++0x	Accepted	30 ms	0 KB
#include <cstdio>

int main()
{
    int p;
    scanf("%d", &p);
    int n = p - 1;
    int count = n;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            do
            {
                n /= i;
            } while (n % i == 0);
            count = count / i * (i - 1);
        }
    }
    if (n != 1)
    {
        count = count / n * (n - 1);
    }
    printf("%d\n", count);
    return 0;
}
