//4005097     Jul 3, 2013 3:58:36 AM	fuwutu	 158B - Taxi	 GNU C++0x	Accepted	46 ms	0 KB
#include <stdio.h>

using namespace std;

int main()
{
    int n, s, count[5]= {0};
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &s);
        count[s] += 1;
    }
    int total = count[4] + count[3] + count[2] / 2;
    count[1] -= count[3];
    if (count[2] % 2 == 1)
    {
        total += 1;
        count[1] -= 2;
    }
    if (count[1] > 0)
    {
        total += (count[1] + 3) / 4;
    }
    printf("%d\n", total);
    return 0;
}
