//4035044   Jul 7, 2013 6:06:34 PM	fuwutu	 285B - Find Marble	 GNU C++0x	Accepted	46 ms	400 KB
#include <cstdio>

int main()
{
    int n, s, t, p[100000+1];
    scanf("%d%d%d", &n, &s, &t);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &p[i]);
    }
    int step = 0;
    while (s != t && p[s] != 0)
    {
        int temp = p[s];
        p[s] = 0;
        s = temp;
        step += 1;
    }
    printf("%d\n", s == t ? step : -1);
    return 0;
}
