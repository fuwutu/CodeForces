//4300331 	Aug 17, 2013 4:07:55 AM 	fuwutu 	337E - Divisor Tree 	GNU C++0x 	Accepted 	30 ms 	0 KB
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

long long a[8], c[8];
int b[8] = {0};

void search(int n, int i, bool extra, int s, int& m)
{
    if (i + 1 < n)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (c[j] % a[i] == 0)
            {
                c[j] /= a[i];
                if (b[i] != 1)
                {
                    search(n, i + 1, extra, s + 1, m);
                }
                else
                {
                    search(n, i + 1, extra, s, m);
                }
                c[j] *= a[i];
            }
        }
        if (b[i] != 1)
        {
            search(n, i + 1, true, s + b[i] + 1, m);
        }
        else
        {
            search(n, i + 1, true, s + b[i], m);
        }
    }
    else
    {
        if (b[n-1] != 1)
        {
            s += b[n-1] + 1;
        }
        else
        {
            s += b[n-1];
        }
        if (extra)
        {
            s += 1;
        }
        if (s < m)
        {
            m = s;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    for (int i = 0; i < n; ++i)
    {
        c[i] = a[i];
        long long x = a[i];
        while (x % 2 == 0)
        {
            x /= 2;
            b[i] += 1;
        }
        for (long long j = 3; j * j <= x; j += 2)
        {
            while (x % j == 0)
            {
                x /= j;
                b[i] += 1;
            }
        }
        if (x != 1)
        {
            b[i] += 1;
        }
    }

    int m = accumulate(b, b + n, n + 1);
    search(n, 0, false, 0, m);

    cout << m << endl;

    return 0;
}
