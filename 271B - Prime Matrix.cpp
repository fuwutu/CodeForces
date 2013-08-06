//4236666   Aug 6, 2013 3:27:01 PM	fuwutu	 271B - Prime Matrix	 GNU C++0x	Accepted	 124 ms	 100 KB
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    const size_t M = 100100;
    bool prime[M];
    prime[0] = false;
    prime[1] = false;
    fill(prime + 2, prime + M, true);
    for (int i = 2; i * i < M; ++i)
    {
        if (prime[i])
        {
            for (int j = i + i; j < M; j += i)
            {
                prime[j] = false;
            }
        }
    }

    int n, m, a, rows[500], cols[500];
    scanf("%d%d", &n, &m);
    fill(rows, rows + n, 0);
    fill(cols, cols + m, 0);

    for (int r = 0; r < n; ++r)
    {
        for (int c = 0; c < m; ++c)
        {
            scanf("%d", &a);
            int x = a;
            while (!prime[x])
            {
                ++x;
            }
            rows[r] += (x - a);
            cols[c] += (x - a);
        }
    }

    int min_row = *min_element(rows, rows + n);
    int min_col = *min_element(cols, cols + m);
    printf("%d\n", min(min_row, min_col));
    return 0;
}
