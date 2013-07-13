//4058096   Jul 13, 2013 9:59:34 AM	fuwutu	 157B - Trace	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    int rr(0);
    for (int i = 0; i < n; ++i)
    {
        rr += a[i] * a[i] * (1 - i % 2 * 2);
    }
    double pi = asin(1) * 2;
    cout << fixed << setprecision(10) << (pi * rr) << endl;
    return 0;
}
