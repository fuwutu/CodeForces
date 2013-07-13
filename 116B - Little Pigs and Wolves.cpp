//4057937   Jul 13, 2013 9:13:14 AM	fuwutu	 116B - Little Pigs and Wolves	 GNU C++0x	Accepted	 15 ms	 0 KB
#include <cstdio>

int main()
{
    int n, m;
    char c[12][13];
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%s", &c[i][1]);
    }
    int eaten(0);
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (c[i][j] == 'W')
            {
                if (c[i-1][j] == 'P' || c[i+1][j] == 'P' || c[i][j-1] == 'P' || c[i][j+1] == 'P')
                {
                    eaten += 1;
                }
            }
        }
    }
    printf("%d\n", eaten);
    return 0;
}
