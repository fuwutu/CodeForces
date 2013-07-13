//4057519   Jul 13, 2013 6:52:47 AM	fuwutu	 245A - System Administrator	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, t, x, y, xa(0), ya(0), xb(0), yb(0);
    cin >> n;
    while (n--)
    {
        cin >> t >> x >> y;
        if (t == 1)
        {
            xa += x;
            ya += y;
        }
        else
        {
            xb += x;
            yb += y;
        }
    }
    cout << (xa >= ya ? "LIVE" : "DEAD") << endl;
    cout << (xb >= yb ? "LIVE" : "DEAD") << endl;
    return 0;
}
