//4048435   Jul 11, 2013 3:30:44 AM	fuwutu	 230B - T-primes	 GNU C++0x	Accepted	78 ms	3100 KB
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    bool notprime[1000000] = {false};
    for (int i = 3; i < 1000; i += 2)
    {
        if (!notprime[i])
        {
            int ii = i + i;
            for (int j = i + ii; j < 1000000; j += ii)
            {
                notprime[j] = true;
            }
        }
    }
    vector<long long> t_primes;
    t_primes.push_back(2*2);
    for (int i = 3; i < 1000000; i += 2)
    {
        if (!notprime[i])
        {
            t_primes.push_back(static_cast<long long>(i) * static_cast<long long>(i));
        }
    }
    int n;
    scanf("%d", &n);
    while (n--)
    {
        long long x;
        scanf("%I64d", &x);
        printf("%s\n", binary_search(t_primes.begin(), t_primes.end(), x) ? "YES" : "NO");
    }

    return 0;
}
