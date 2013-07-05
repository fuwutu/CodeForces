//4027443   Jul 5, 2013 6:45:49 PM	fuwutu	 69A - Young Physicist	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, x, y, z, xsum(0), ysum(0), zsum(0);
    cin >> n;

    while (n--)
    {
        cin >> x >> y >> z;
        xsum += x;
        ysum += y;
        zsum += z;
    }

    if (xsum == 0 && ysum == 0 && zsum == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
