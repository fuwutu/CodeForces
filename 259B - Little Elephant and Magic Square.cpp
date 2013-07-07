//4035330   Jul 7, 2013 7:30:59 PM	fuwutu	 259B - Little Elephant and Magic Square	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int x11, x12, x13, x21, x22, x23, x31, x32, x33;
    cin >> x11 >> x12 >> x13 >> x21 >> x22 >> x23 >> x31 >> x32 >> x33;
    int sum = (x12 + x13 + x21 + x23 + x31 + x32) / 2;
    x11 = sum - x12 - x13;
    x22 = sum - x21 - x23;
    x33 = sum - x31 - x32;
    cout << x11 << " " << x12 << " " << x13 << endl;
    cout << x21 << " " << x22 << " " << x23 << endl;
    cout << x31 << " " << x32 << " " << x33 << endl;
    return 0;
}
