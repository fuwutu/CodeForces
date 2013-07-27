//4172437   Jul 27, 2013 5:48:18 AM	fuwutu	 203A - Two Problems	 GNU C++0x	Accepted	30 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int x, t, a, b, da, db;
    cin >> x >> t >> a >> b >> da >> db;
    if (x == 0)
    {
        cout << "YES" << endl;
        return 0;
    }

    if (x == 0
        || (x <= a && x > a - da * t && (a - x) % da == 0)
        || (x <= b && x > b - db * t && (b - x) % db == 0))
    {
        cout << "YES" << endl;
        return 0;
    }

    for (int pa = a, pb = b - db * (t - 1); pa > a - da * t && pb <= b; )
    {
        if (pa + pb > x)
        {
            pa -= da;
        }
        else if (pa + pb < x)
        {
            pb += db;
        }
        else
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
