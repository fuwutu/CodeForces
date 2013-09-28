//4592799	 Sep 28, 2013 4:08:58 AM	fuwutu	 344A - Magnets	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <cstdio>

int main()
{
    int n, groups(0);
    scanf("%d", &n);

    char s[3], c('\0');
    while (n--)
    {
        scanf("%s", s);
        if (s[0] != c)
        {
            groups += 1;
        }
        c = s[0];
    }

    printf("%d\n",groups);
    return 0;
}
