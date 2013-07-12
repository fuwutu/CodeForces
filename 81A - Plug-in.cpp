//4055785   Jul 12, 2013 8:36:40 PM	fuwutu	 81A - Plug-in	 GNU C++0x	Accepted	15 ms	200 KB
#include <cstdio>

int main()
{
    char ch[200001];
    scanf("%s", ch);
    char* p = ch;
    int n = 0;
    while (*p != 0)
    {
        ch[n++] = *p;
        if (n >= 2 && ch[n-1] == ch[n-2])
        {
            n -= 2;
        }
        ++p;
    }
    ch[n] = 0;
    printf("%s\n", ch);
    return 0;
}
