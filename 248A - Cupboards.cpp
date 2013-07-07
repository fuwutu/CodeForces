//4034999   Jul 7, 2013 5:49:19 PM	fuwutu	 248A - Cupboards	 GNU C++0x	Accepted	15 ms	0 KB
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n, l, r, left(0), right(0);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d%d", &l, &r);
        left += l;
        right += r;
    }
    printf("%d\n", min(left, n - left) + min(right, n - right));
    return 0;
}
