//4035298   Jul 7, 2013 7:23:30 PM	fuwutu	 265B - Roadside Trees (Simplified Edition)	 GNU C++0x	Accepted	31 ms	0 KB
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n, h, h0(0);
    scanf("%d", &n);
    int time = n + n - 1;
    while (n--)
    {
        scanf("%d", &h);
        time += abs(h - h0);
        h0 = h;
    }
    printf("%d\n", time);
    return 0;
}
