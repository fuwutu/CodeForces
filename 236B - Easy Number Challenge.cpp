//4306373	 Aug 18, 2013 6:53:30 AM	fuwutu	 236B - Easy Number Challenge	 GNU C++0x	Accepted	 62 ms	 0 KB
#include <cstdio>

int main()
{
    const int primes[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int pfc[101][25] = {0};
    for (int i = 1; i <= 100; ++i)
    {
        int ii = i;
        for (int j = 0; ii != 1 && j < 25; ++j)
        {
            while (ii % primes[j] == 0)
            {
                pfc[i][j] += 1;
                ii /= primes[j];
            }
        }
    }

    int a, b, c, answer(0);
    scanf("%d%d%d", &a, &b ,&c);
    for (int i = 1; i <= a; ++i)
    {
        for (int j = 1; j <= b; ++j)
        {
            for (int k = 1; k <= c; ++k)
            {
                int divisors = 1;
                for (int d = 0; d < 25; ++d)
                {
                    divisors *= (1 + pfc[i][d] + pfc[j][d] + pfc[k][d]);
                }
                answer += divisors;
            }
        }
    }
    answer %= 1073741824;
    printf("%d\n", answer);

    return 0;
}
