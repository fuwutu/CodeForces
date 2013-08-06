//4236895   Aug 6, 2013 4:35:30 PM	fuwutu	 140A - New Year Table	 GNU C++0x	Accepted	30 ms	0 KB
#include <cstdio>
#include <cmath>

int main()
{
    int n;
    double R, r;
    scanf("%d%lf%lf", &n, &R, &r);
    if (   n == 1 && r <= R
        || n == 2 && r * 2 <= R
        || asin(r / (R - r)) * n <= 3.1415927)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
