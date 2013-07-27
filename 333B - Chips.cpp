//4188914   Jul 27, 2013 4:36:49 PM	fuwutu	 333B - Chips	 GNU C++0x	Accepted	62 ms	0 KB
#include <cstdio>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int n, m, x, y, row[1001], col[1001];
    scanf("%d%d", &n, &m);
    fill(row + 1, row + n + 1, 1);
    fill(col + 1, col + n + 1, 1);

    while (m--)
    {
        scanf("%d%d", &x, &y);
        row[x] = 0;
        col[y] = 0;
    }

    int points = accumulate(row + 2, row + n, 0) + accumulate(col + 2, col + n, 0);
    if (n >= 3 && n % 2 == 1 && row[n / 2 + 1] == 1 && col[n / 2 + 1] == 1)
    {
        points -= 1;
    }

    printf("%d\n", points);
    return 0;
}
