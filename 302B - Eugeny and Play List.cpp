//4436009	 Sep 9, 2013 6:53:39 PM	fuwutu	 302B - Eugeny and Play List	 GNU C++0x	Accepted	156 ms	400 KB
#include <cstdio>

int main()
{
    int n, m, s[100001];
    s[0] = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i)
    {
        int c, t;
        scanf("%d%d", &c, &t);
        s[i] = s[i-1] + c * t;
    }
    int song = 1;
    while (m--)
    {
        int v;
        scanf("%d", &v);
        while (v > s[song])
        {
            song += 1;
        }
        printf("%d\n", song);
    }
}
