//4239012   Aug 7, 2013 10:06:36 AM	fuwutu	 4B - Before an Exam	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <cstdio>
#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
    int d, sumTime, minTime[30], maxTime[30];
    scanf("%d%d", &d, &sumTime);
    for (int i = 0; i < d; ++i)
    {
        scanf("%d%d", &minTime[i], &maxTime[i]);
    }
    int minTimeSum = accumulate(minTime, minTime + d, 0);
    int maxTimeSum = accumulate(maxTime, maxTime + d, 0);
    if (minTimeSum <= sumTime && sumTime <= maxTimeSum)
    {
        printf("YES\n");
        for (int i = 0; i < d; ++i)
        {
            int t = min(minTime[i] + sumTime - minTimeSum, maxTime[i]);
            printf((i + 1 < d ? "%d " : "%d\n"), t);
            sumTime -= (t - minTime[i]);
        }
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
