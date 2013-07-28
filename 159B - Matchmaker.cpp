//4192310   Jul 28, 2013 5:58:29 AM	fuwutu	 159B - Matchmaker	 GNU C++0x	Accepted	342 ms	1500 KB
#include <cstdio>
#include <algorithm>

using namespace std;

struct marker
{
    int ax;
    int by;
};

bool cmp(const marker& left, const marker& right)
{
    return (left.by < right.by)
        || (left.by == right.by && left.ax < right.ax);
}

int main()
{
    marker markers[100000], caps[100000];
    int n, m;
    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d%d", &markers[i].ax, &markers[i].by);
    }

    for (int i = 0; i < m; ++i)
    {
        scanf("%d%d", &caps[i].ax, &caps[i].by);
    }

    sort(markers, markers + n, cmp);
    sort(caps, caps + m, cmp);

    int u(0);
    for (int i = 0, j = 0; i < n && j < m; )
    {
        if (markers[i].by < caps[j].by)
        {
            ++i;
        }
        else if (markers[i].by > caps[j].by)
        {
            ++j;
        }
        else
        {
            ++u;
            ++i;
            ++j;
        }
    }

    int v(0);
    for (int i = 0, j = 0; i < n && j < m; )
    {
        if (markers[i].by < caps[j].by)
        {
            ++i;
        }
        else if (markers[i].by > caps[j].by)
        {
            ++j;
        }
        else
        {
            if (markers[i].ax < caps[j].ax)
            {
                ++i;
            }
            else if (markers[i].ax > caps[j].ax)
            {
                ++j;
            }
            else
            {
                ++v;
                ++i;
                ++j;
            }
        }
    }

    printf("%d %d\n", u, v);
    return 0;
}
