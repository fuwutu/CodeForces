//4055457   Jul 12, 2013 6:54:18 PM	fuwutu	 313B - Ilya and Queries	 GNU C++0x	Accepted	109 ms	500 KB
#include <cstdio>
#include <cstring>

int main()
{
    char s[100001];
    int a[100001], m, l, r;

    scanf("%s%d", s, &m);
    int len = strlen(s);

    a[1] = 0;
    for (int i = 1; i < len; ++i)
    {
        if (s[i] == s[i-1])
        {
            a[i+1] = a[i] + 1;
        }
        else
        {
            a[i+1] = a[i];
        }
    }

    while (m--)
    {
        scanf("%d%d", &l, &r);
        printf("%d\n", a[r] - a[l]);
    }
    return 0;
}
