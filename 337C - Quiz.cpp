//4302392	 Aug 17, 2013 1:03:52 PM	fuwutu	 337C - Quiz	 GNU C++0x	Accepted	 62 ms	 0 KB
#include <iostream>

using namespace std;

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;
    long long wrong = n - m;
    if ((wrong + 1) * (k - 1) >= m)
    {
        cout << m << endl;
    }
    else
    {
        long long consecutive = m - wrong * (k - 1);
        long long t = consecutive / k;
        long long result = 1;
        long long pow = 2;
        long long tt = t;
        while (tt != 0)
        {
            if (tt % 2 == 1)
            {
                result *= pow;
                result %= 1000000009LL;
            }
            tt /= 2;
            pow = pow * pow % 1000000009LL;
        }
        result = ((result - 1) * 2 * k+ m - t * k) % 1000000009LL;
        cout << result << endl;
    }
    return 0;
}
