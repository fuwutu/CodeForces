//4265480   Aug 11, 2013 3:16:42 PM	fuwutu	 35A - Shell Game	 GNU C++0x	Accepted	 30 ms	 100 KB
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int x, a, b, cup[4] = {0};

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    scanf("%d", &x);
    cup[x] = 1;

    scanf("%d%d", &a, &b);
    swap(cup[a], cup[b]);

    scanf("%d%d", &a, &b);
    swap(cup[a], cup[b]);

    scanf("%d%d", &a, &b);
    swap(cup[a], cup[b]);

    printf("%d\n", find(cup + 1, cup + 3 + 1, 1) - cup);
    return 0;
}
