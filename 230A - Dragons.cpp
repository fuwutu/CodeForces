//4032937   Jul 7, 2013 6:12:45 AM	fuwutu	 230A - Dragons	 GNU C++0x	Accepted	15 ms	100 KB
#include <iostream>
#include <algorithm>

using namespace std;

struct dragon
{
    int x;
    int y;
};

bool cmp(const dragon& left, const dragon& right)
{
    return left.x < right.x;
}

int main()
{
    int s, n;
    cin >> s >> n;

    dragon d[10000];
    for (int i = 0; i < n; ++i)
    {
        cin >> d[i].x >> d[i].y;
    }
    sort(d, d + n, cmp);

    int boss = d[n-1].x;
    for (int i = 0; i < n && s <= boss; ++i)
    {
        if (s > d[i].x)
        {
            s += d[i].y;
        }
        else
        {
            break;
        }
    }

    if (s > boss)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
