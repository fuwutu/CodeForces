//4007107   Jul 3, 2013 7:04:01 PM	fuwutu	 148A - Insomnia cure	 GNU C++0x	Accepted	 15 ms	 0 KB
#include <iostream>

using namespace std;

int LCM(int m, int n)
{
    int mm(m), nn(n), r;
    while ((r = m % n) != 0)
    {
        m = n;
        n = r;
    }
    return mm / n * nn;
}

int main()
{
    int k, l, m, n, d, count(0);
    cin >> k >> l >> m >> n >> d;

    int lcm = LCM(LCM(k, l), LCM(m, n));
    if (d > lcm)
    {
        int r = 0;
        for (int i = 1; i <= d % lcm; ++i)
        {
            if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            {
                r += 1;
            }
        }

        int c = r;
        for (int i = d % lcm + 1; i <= lcm; ++i)
        {
            if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            {
                c += 1;
            }
        }

        count = c * (d / lcm) + r;
    }
    else
    {
        for (int i = 1; i <= d; ++i)
        {
            if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            {
                count += 1;
            }
        }
    }
    cout << count << endl;
    return 0;
}
