//4240326   Aug 7, 2013 5:13:59 PM	fuwutu	 26A - Almost Prime	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <cstdio>

int main()
{
    int n, amount(0);
    scanf("%d", &n);

    bool b[3001] = {false};
    int pfactors[3001] = {0};
    for (int i = 2; i <= n; ++i)
    {
        if (!b[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                b[j] = true;
                pfactors[j] += 1;
            }
        }

        if (pfactors[i] == 2)
        {
            amount += 1;
        }
    }
    printf("%d\n", amount);
    return 0;
}
