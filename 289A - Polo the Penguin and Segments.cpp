//4124774   Jul 21, 2013 4:09:28 AM	fuwutu	 289A - Polo the Penguin and Segments	 GNU C++0x	Accepted	46 ms	0 KB
#include <cstdio>

int main()
{
    int n, k, l, r, s(0);
    scanf("%d%d", &n, &k);
    while (n--)
    {
        scanf("%d%d", &l, &r);
        s = (s + r - l + 1) % k;
    }
    printf("%d\n", (k - s) % k);
    return 0;
}
