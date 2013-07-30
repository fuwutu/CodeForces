//4205110   Jul 30, 2013 8:14:07 PM	fuwutu	 68A - Irrational problem	 GNU C++0x	Accepted	30 ms	0 KB
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int p[4], a, b;
    cin >> p[0] >> p[1] >> p[2] >> p[3] >> a >> b;

    int m = *min_element(p, p + 4);
    if (a < m)
    {
        cout << min(b, m - 1) - a + 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}
