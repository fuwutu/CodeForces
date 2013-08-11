//4265426   Aug 11, 2013 3:03:02 PM	fuwutu	 40A - Find Color	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <cstdio>
#include <cmath>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    int r2 = x * x + y * y;
    int r = floor(sqrt(static_cast<double>(r2)));
    if (r * r < r2 && (r + 1) * (r + 1) > r2
        && (r % 2 == 1 && x * y > 0 || r % 2 == 0 && x * y < 0))
    {
        printf("white\n");
    }
    else
    {
        printf("black\n");
    }
    return 0;
}
