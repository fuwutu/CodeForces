//4306317	 Aug 18, 2013 6:33:43 AM	fuwutu	 276C - Little Girl and Maximum Sum	 GNU C++0x	Accepted	218 ms	1500 KB
#include <cstdio>
#include <algorithm>

using namespace std;

int a[200000], c[200001] = {0};

int main()
{
    int n, q, l, r;
    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    while (q--)
    {
        scanf("%d%d", &l, &r);
        c[l-1] += 1;
        c[r] -= 1;
    }
    for (int i = 1; i < n; ++i)
    {
        c[i] += c[i-1];
    }

    sort(a, a + n);
    sort(c, c + n);
    long long answer = 0;
    for (int i = 0; i < n; ++i)
    {
        answer += static_cast<long long>(a[i]) * static_cast<long long>(c[i]);
    }
    printf("%I64d\n", answer);
    return 0;
}
