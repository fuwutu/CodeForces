//4215408   Aug 2, 2013 9:09:42 AM	fuwutu	 315B - Sereja and Array	 GNU C++0x	Accepted	 156 ms	 400 KB
#include <cstdio>

int main()
{
    int n, m, a[100001], t, v, x, y, q, increase(0);
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &a[i]);
    }

    while (m--)
    {
        scanf("%d", &t);
        switch (t)
        {
        case 1:
            scanf("%d%d", &v, &x);
            a[v] = x - increase;
            break;

        case 2:
            scanf("%d", &y);
            increase += y;
            break;

        case 3:
            scanf("%d", &q);
            printf("%d\n", a[q] + increase);
            break;

        default:
            break;
        }
    }
}
