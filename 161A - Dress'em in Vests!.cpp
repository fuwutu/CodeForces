//4172027   Jul 27, 2013 4:39:57 AM 	fuwutu 	161A - Dress'em in Vests! 	GNU C++0x 	Accepted 	342 ms 	800 KB
#include <cstdio>

using namespace std;

int main()
{
    int n, m, x, y, a[100000], b[100000];
    scanf("%d%d%d%d", &n, &m, &x, &y);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < m; ++j)
    {
        scanf("%d", &b[j]);
    }

    int count(0);
    for (int i = 0, j = 0; i < n && j < m; )
    {
        if (b[j] < a[i] - x)
        {
            ++j;
        }
        else if (b[j] > a[i] + y)
        {
            ++i;
        }
        else
        {
            a[count] = ++i;
            b[count] = ++j;
            ++count;
        }
    }

    printf("%d\n", count);
    for (int k = 0; k < count; ++k)
    {
        printf("%d %d\n", a[k], b[k]);
    }
    return 0;
}
