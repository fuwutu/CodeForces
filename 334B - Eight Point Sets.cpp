//4176866   Jul 27, 2013 12:50:16 PM	fuwutu	 334B - Eight Point Sets	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <iostream>
#include <algorithm>

using namespace std;

struct point
{
    int x;
    int y;
};

bool cmp(const point& left, const point& right)
{
    return (left.x < right.x)
        || (left.x == right.x && left.y < right.y);
}

int main()
{
    point p[8];
    for (int i = 0; i < 8; ++i)
    {
        cin >> p[i].x >> p[i].y;
    }
    sort(p, p + 8, cmp);
    if (   p[0].x == p[1].x && p[1].x == p[2].x
        && p[2].x != p[3].x
        && p[3].x == p[4].x
        && p[4].x != p[5].x
        && p[5].x == p[6].x && p[6].x == p[7].x
        && p[0].y == p[3].y && p[3].y == p[5].y
        && p[5].y != p[1].y
        && p[1].y == p[6].y
        && p[6].y != p[2].y
        && p[2].y == p[4].y && p[4].y == p[7].y)
    {
        cout << "respectable" << endl;
    }
    else
    {
        cout << "ugly" << endl;
    }
    return 0;
}
