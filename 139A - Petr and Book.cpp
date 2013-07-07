//4034061   Jul 7, 2013 1:27:10 PM	fuwutu	 139A - Petr and Book	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, y[8] = {0};
    cin >> n;
    for (int d = 1; d <= 7; ++d)
    {
        cin >> y[d];
        y[d] += y[d-1];
    }
    n = (n - 1) % y[7] + 1;
    for (int d = 1; d <= 7; ++d)
    {
        if (y[d] >= n)
        {
            cout << d << endl;
            break;
        }
    }
    return 0;
}
