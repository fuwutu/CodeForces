//4035181   Jul 7, 2013 6:43:30 PM	fuwutu	 205A - Little Elephant and Rozdil	 GNU C++0x	Accepted	46 ms	0 KB
#include <cstdio>

using namespace std;

int main()
{
    int n, time, min_time(1000000001), min_index(0), count(1);
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &time);
        if (time < min_time)
        {
            min_time = time;
            min_index = i;
            count = 1;
        }
        else if (time == min_time)
        {
            count += 1;
        }
    }
    if (count == 1)
    {
        printf("%d\n", min_index);
    }
    else
    {
        printf("Still Rozdil\n");
    }
    return 0;
}
