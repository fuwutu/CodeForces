//4430072	 Sep 8, 2013 5:45:06 AM	fuwutu	 317B - Ants	 GNU C++0x	Accepted	436 ms	100 KB
#include <cstdio>
#include <memory.h>

const int M = 64;

int main()
{
    int n, t, ants[M * 2 + 1][M * 2 + 1] = {0}, ants_temp[M * 2 + 1][M * 2 + 1];
    scanf("%d%d", &n, &t);
    ants[M][M] = n;
    bool find = (n != 0);
    while (find)
    {
        find = false;

        memset(ants_temp, 0, sizeof(ants_temp));

        for (int i = 0; i <= M * 2; ++i)
        {
            for (int j = 0; j <= M * 2; ++j)
            {
                if (ants[i][j] >= 4)
                {
                    find = true;
                    ants_temp[i-1][j] += ants[i][j] / 4;
                    ants_temp[i+1][j] += ants[i][j] / 4;
                    ants_temp[i][j-1] += ants[i][j] / 4;
                    ants_temp[i][j+1] += ants[i][j] / 4;
                }
                ants_temp[i][j] += ants[i][j] % 4;
            }
        }

        memcpy(ants, ants_temp, sizeof(ants));
    }

    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        printf("%d\n", (x >= -M && y >= - M && x <= M && y <= M) ? ants[M + x][M + y] : 0);
    }
    return 0;
}
