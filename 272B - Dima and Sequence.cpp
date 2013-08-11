//4265639   Aug 11, 2013 3:54:36 PM	fuwutu	 272B - Dima and Sequence	 GNU C++0x	Accepted	62 ms	0 KB
#include <cstdio>

using namespace std;

int bitcount(int n) 
{ 
    n = (n & 0x55555555) + ((n >> 1) & 0x55555555) ; 
    n = (n & 0x33333333) + ((n >> 2) & 0x33333333) ; 
    n = (n & 0x0f0f0f0f) + ((n >> 4) & 0x0f0f0f0f) ; 
    n = (n & 0x00ff00ff) + ((n >> 8) & 0x00ff00ff) ; 
    n = (n & 0x0000ffff) + ((n >> 16) & 0x0000ffff) ; 
    return n ; 
}

int main()
{
    int n, a, c[32] = {0};
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &a);
        c[bitcount(a)] += 1;
    }

    long long answer = 0;
    for (size_t i = 0; i < sizeof(c) / sizeof(c[0]); ++i)
    {
        answer += static_cast<long long>(c[i]) * static_cast<long long>(c[i] - 1) / 2;
    }
    printf("%I64d\n", answer);
    return 0;
}
