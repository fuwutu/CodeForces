//4027473   Jul 5, 2013 6:52:44 PM	fuwutu	 237A - Free Cash	 GNU C++0x	Accepted	46 ms	0 KB
#include <stdio.h>

int main()
{
    int n, h, m, h0, m0, c(1), cash(1);
    scanf("%d", &n);
    scanf("%d%d", &h0, &m0);

    while (--n)
    {
        scanf("%d%d", &h, &m);
        if (h == h0 && m == m0)
        {
            c += 1;
            if (c > cash)
            {
                cash = c;
            }
        }
        else
        {
            c = 1;
        }
        h0 = h;
        m0 = m;
    }
    printf("%d\n", cash);
    return 0;
}
