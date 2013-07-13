//4058602   Jul 13, 2013 12:18:22 PM	fuwutu	 282B - Painting Eggs	 GNU C++0x	Accepted	484 ms	0 KB
#include <cstdio>

int main()
{
    int n, a, g;
    scanf("%d", &n);

    int A(0);
    while (n--)
    {
        scanf("%d%d", &a, &g);
        A += a;
        if (A <= 500)
        {
            printf("A");
        }
        else
        {
            A -= 1000;
            printf("G");
        }
    }
    printf("\n");

    return 0;
}
