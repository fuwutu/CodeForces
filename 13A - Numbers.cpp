//4264970   Aug 11, 2013 1:04:16 PM	fuwutu	 13A - Numbers	 GNU C++0x	Accepted	30 ms	0 KB
#include <cstdio>

int GCD(int m, int n)
{
    int r = m % n;
    while (r != 0)
    {
        m = n;
        n = r;
        r = m % n;
    }
    return n;
}

int main()
{
    int A;
    scanf("%d", &A);

    int X(0), Y(A-2);
    for (int base = 2; base < A; ++base)
    {
        int n(A), ds(0);
        while (n != 0)
        {
            ds += n % base;
            n /= base;
        }
        X += ds;
    }

    int gcd = GCD(X, Y);
    X /= gcd;
    Y /= gcd;
    printf("%d/%d\n", X, Y);
    return 0;
}
