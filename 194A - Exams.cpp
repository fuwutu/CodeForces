//4238316   Aug 7, 2013 4:47:59 AM	fuwutu	 194A - Exams	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <cstdio>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d\n", k <= n * 3 ? n * 3 - k : 0);
    return 0;
}
