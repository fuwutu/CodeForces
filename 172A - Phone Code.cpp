//4059111   Jul 13, 2013 2:09:39 PM 	fuwutu 	172A - Phone Code 	GNU C++0x 	Accepted 	31 ms 	0 KB
#include <cstdio>
#include <cstring>

int main()
{
    int n;
    char s0[21], s[21];
    scanf("%d%s", &n, s0);
    int m = strlen(s0);
    while (--n)
    {
        scanf("%s", s);
        for (int i = 0; i < m; ++i)
        {
            if (s[i] != s0[i])
            {
                m = i;
                break;
            }
        }
    }
    printf("%d\n", m);
    return 0;
}
