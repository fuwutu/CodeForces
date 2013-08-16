//4285064	 Aug 16, 2013 9:06:46 AM	fuwutu	 29A - Spit Problem	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <cstdio>

int main()
{
    int n, x[100], d[100];
    bool spitted = false;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d%d", &x[i], &d[i]);
        for (int j = 0; j < i; ++j)
        {
            if (x[i] + d[i] == x[j] && x[j] + d[j] == x[i])
            {
                spitted = true;
                break;
            }
        }
        if (spitted)
        {
            break;
        }
    }
    printf(spitted ? "YES\n" : "NO\n");
    return 0;
}
