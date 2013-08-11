//4265058   Aug 11, 2013 1:29:54 PM	fuwutu	 22A - Second Order Statistics	 GNU C++0x	Accepted	 62 ms	 0 KB
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n, a[101];
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &a[i]);
    }

    int x = *min_element(a + 1, a + n + 1);
    int value2(x);
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] > x)
        {
            if (value2 == x || a[i] < value2)
            {
                value2 = a[i];
            }
        }
    }

    if (value2 != x)
    {
        printf("%d\n", value2);
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
