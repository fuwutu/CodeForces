//4263589   Aug 11, 2013 6:26:48 AM 	fuwutu 	208D - Prizes, Prizes, more Prizes 	GNU C++0x 	Accepted 	30 ms 	0 KB
#include <cstdio>

int main()
{
    int n, p[50], a, b, c, d, e, points(0), mug(0), towel(0), bag(0), bicycle(0), car(0);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &p[i]);
    }
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    for (int i = 0; i < n; ++i)
    {
        points += p[i];

        car += points / e;
        points %= e;
        bicycle += points / d;
        points %= d;
        bag += points / c;
        points %= c;
        towel += points / b;
        points %= b;
        mug += points / a;
        points %= a;
    }
    printf("%I64d %I64d %I64d %I64d %I64d\n%d\n", mug, towel, bag, bicycle, car, points);
    return 0;
}
