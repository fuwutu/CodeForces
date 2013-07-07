//4033228   Jul 7, 2013 9:03:08 AM	fuwutu	 151A - Soft Drinking	 GNU C++0x	Accepted	0 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min(min(k * l / nl, c * d), p / np) / n << endl;
    return 0;
}
