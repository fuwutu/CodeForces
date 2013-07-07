//4035123   Jul 7, 2013 6:28:36 PM	fuwutu	 222A - Shooshuns and Sequence	 GNU C++0x	Accepted	31 ms	0 KB
#include <cstdio>

using namespace std;

int main()
{
    int n, k, a, last(0), continuous(1);
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a);
        if (a == last)
        {
            continuous += 1;
        }
        else
        {
            continuous = 1;
        }
        last = a;
    }
    printf("%d\n", continuous + k > n ? n - continuous: -1);
    return 0;
}
