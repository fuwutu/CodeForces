//4265591   Aug 11, 2013 3:43:45 PM	fuwutu	 31A - Worms Evolution	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <cstdio>

using namespace std;

int main()
{
    int n, a[101];
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &a[i]);
    }

    bool found = false;
    for (int i = 1; !found && i <= n; ++i)
    {
        for (int j = 1; !found && j <= n; ++j)
        {
            if (j != i)
            {
                for (int k = j + 1; k <= n; ++k)
                {
                    if (k != i && a[i] == a[j] + a[k])
                    {
                        printf("%d %d %d\n", i, j, k);
                        found = true;
                        break;
                    }
                }
            }
        }
    }

    if (!found)
    {
        printf("-1\n");
    }

    return 0;
}
