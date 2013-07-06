//4030436   Jul 6, 2013 2:16:09 PM	fuwutu	 158D - Ice Sculptures	 GNU C++0x	Accepted	15 ms	100 KB
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n, t[20000], sum(0), partsum[20000];
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &t[i]);
        sum += t[i];
    }

    int maximum(sum);
    for (int d = 2; d <= n / 3; ++d)
    {
        if (n % d == 0)
        {
            fill(partsum, partsum + d, 0);
            int x = n / d;
            int k = 0;
            for (int i = 0; i < x; ++i)
            {
                for (int j = 0; j < d; ++j)
                {
                    partsum[j] += t[k++];
                }
            }
            for (int j = 0; j < d; ++j)
            {
                if (partsum[j] > maximum)
                {
                    maximum = partsum[j];
                }
            }
        }
    }
    printf("%d\n", maximum);
    return 0;
}
