//4034181   Jul 7, 2013 2:00:39 PM	fuwutu	 127A - Wasted Time	 GNU C++0x	Accepted	15 ms	100 KB
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    double x, y, x0, y0, total(0.0);
    cin >> x0 >> y0;
    while (--n)
    {
        cin >> x >> y;
        total += sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
        x0 = x;
        y0 = y;
    }
    cout << fixed << setprecision(6) << total * k / 50 << endl;
    return 0;
}
