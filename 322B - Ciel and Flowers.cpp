//4264440   Aug 11, 2013 11:04:58 AM	fuwutu	 322B - Ciel and Flowers	 GNU C++0x	Accepted	 62 ms	 0 KB
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    unsigned r, g, b;
    cin >> r >> g >> b;

    unsigned R(r % 3), G(g % 3), B(b % 3);
    unsigned amount(r / 3 + g / 3 + b / 3 + min(R, min(G, B)));
    if (   R == 2 && G == 2 && B == 0 && b != 0
        || G == 2 && B == 2 && R == 0 && r != 0
        || B == 2 && R == 2 && G == 0 && g != 0)
    {
        amount += 1;
    }
    cout << amount << endl;
    return 0;
}
