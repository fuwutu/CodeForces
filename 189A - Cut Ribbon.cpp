//4240283   Aug 7, 2013 4:58:38 PM	fuwutu	 189A - Cut Ribbon	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n, a, b, c, maximum(0);
    scanf("%d%d%d%d", &n, &a, &b, &c);

    bool x[4001] = {false}, y[8001] = {false};
    x[0] = true;
    for (int step = 1; ; ++step)
    {
        int count(0);
        for (int i = 0; i <= n; ++i)
        {
            if (x[i])
            {
                y[i+a] = true;
                y[i+b] = true;
                y[i+c] = true;
                count += 1;
            }
        }

        if (count == 0)
        {
            break;
        }

        copy(y, y + n + 1, x);
        fill(y, y + n + 1, false);

        if (x[n])
        {
            maximum = step;
        }
    }
    printf("%d\n", maximum);
    return 0;
}
