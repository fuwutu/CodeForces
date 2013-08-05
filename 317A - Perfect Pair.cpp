//4231314   Aug 5, 2013 9:18:30 AM  fuwutu  317A - Perfect Pair GNU C++0x   Accepted    62 ms   0 KB 
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long x, y, m;
    cin >> x >> y >> m;
    if (x >= m || y >= m)
    {
        cout << 0 << endl;
    }
    else
    {
        if (x <= 0 && y <= 0)
        {
            cout << -1 << endl;
        }
        else
        {
            if (x < y)
            {
                swap(x, y);
            }
            long long result(0);
            if (y < 0)
            {
                long long n = (-y) / x + 1;
                result += n;
                y += x * n;
            }
            while (x < m)
            {
                y += x;
                swap(x, y);
                result += 1;
            }
            cout << result << endl;
        }
    }
    return 0;
}
