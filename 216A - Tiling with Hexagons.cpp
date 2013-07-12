//4055814   Jul 12, 2013 8:45:32 PM	fuwutu	 216A - Tiling with Hexagons	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << a * b + b * c + c * a - a - b - c + 1 << endl;
    return 0;
}
