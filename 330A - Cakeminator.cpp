//4136647   Jul 22, 2013 8:08:09 PM	fuwutu	 330A - Cakeminator	 GNU C++0x	Accepted	 15 ms	 0 KB
#include <cstdio>

int main()
{
    int r, c, sr[10][10] = {0}, sc[10][10] = {0};
    scanf("%d%d", &r, &c);
    for (int i = 0; i < r; ++i)
    {
        char ch[11];
        scanf("%s", ch);
        for (int j = 0; j < c; ++j)
        {
            if (ch[j] == 'S')
            {
                for (int ii = 0; ii < r; ++ii)
                {
                    sr[ii][j] = 1;
                }
                for (int jj = 0; jj < c; ++jj)
                {
                    sc[i][jj] = 1;
                }
            }
        }
    }
    int count(r*c);
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (sr[i][j] == 1 && sc[i][j] == 1)
            {
                count -= 1;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
