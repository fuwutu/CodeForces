//4076621   Jul 15, 2013 8:14:28 PM	fuwutu	 302A - Eugeny and Array	 GNU C++0x	Accepted	187 ms	0 KB
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, a, l, r, c(0), d(0);
    scanf("%d%d", &n, &m);
    while (n--)
    {
        scanf("%d", &a);
        if (a == 1)
        {
            c += 1;
        }
        else
        {
            d += 1;
        }
    }
    int up = min(c, d) * 2;
    while (m--)
    {
        scanf("%d%d", &l, &r);
        printf((r - l) % 2 == 1 && r - l < up ? "1\n" : "0\n");
    }
    return 0;
}
