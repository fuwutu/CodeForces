//4306556	 Aug 18, 2013 7:48:28 AM	fuwutu	 66B - Petya and Countryside	 GNU C++0x	Accepted	30 ms	0 KB
#include <cstdio>

int main()
{
    int n, height[1000], left[1000] = {0}, right[1000] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &height[i]);
    }

    for (int i = 1; i < n; ++i)
    {
        left[i] = (height[i] >= height[i-1] ? left[i-1] + 1 : 0);
    }
    for (int i = n - 2; i >= 0; --i)
    {
        right[i] = (height[i] >= height[i+1] ? right[i+1] + 1 : 0);
    }

    int maximal(0);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] + right[i] + 1 > maximal)
        {
            maximal = left[i] + right[i] + 1;
        }
    }
    printf("%d\n", maximal);
    return 0;
}
