//4263502   Aug 11, 2013 6:01:01 AM 	fuwutu 	268C - Beautiful Sets of Points 	GNU C++0x 	Accepted 	30 ms 	0 KB
#include <cstdio>
#include <algorithm>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int k = std::min(n, m);
    printf("%d\n", k + 1);
    for (int i = 0; i <= k; ++i)
    {
        printf("%d %d\n", i, k - i);
    }
    return 0;
}
