//4259668   Aug 10, 2013 8:56:45 AM	fuwutu00:06	 336A - Vasily the Bear and Triangle	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x > 0)
    {
        if (y > 0)
        {
            cout << 0 << " " << x + y << " " << x + y << " " << 0 << endl;
        }
        else
        {
            cout << 0 << " " << y - x << " " << x - y << " " << 0 << endl;;
        }
    }
    else
    {
        if (y > 0)
        {
            cout << x - y << " " << 0 << " " << 0 << " " << y - x << endl;;
        }
        else
        {
            cout << x + y << " " << 0 << " " << 0 << " " << x + y << endl;;
        }
    }
    return 0;
}
