//4057901   Jul 13, 2013 8:57:44 AM	fuwutu	 279B - Books	 GNU C++0x	Accepted	31 ms	400 KB
#include <cstdio>

int main()
{
    int n, t, a[100000];
    scanf("%d%d", &n, &t);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }

    int j(0), time(0);
    while (j < n && time + a[j] <= t)
    {
        time += a[j++];
    }
    int maximum(j);
    for (int i = 0; i < n; ++i)
    {
        time -= a[i];
        while (j < n && time + a[j] <= t)
        {
            time += a[j++];
        }
        if (j - i - 1 > maximum)
        {
            maximum = j - i - 1;
        }
    }
    printf("%d\n", maximum);
    return 0;
}
