//4266560   Aug 11, 2013 7:04:01 PM	fuwutu	 79A - Bus Game	 GNU C++0x	Accepted	30 ms	0 KB
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int turns = min(x / 2, y / 24);
    x -= 2 * turns;
    y -= 24 * turns;

    while (true)
    {
        if (x >= 2 && y >= 2)
        {
            x -= 2;
            y -= 2;
        }
        else if (x >= 1 && y >= 12)
        {
            x -= 1;
            y -= 12;
        }
        else if (y >= 22)
        {
            y -= 22;
        }
        else
        {
            cout << "Hanako" << endl;
            break;
        }

        if (y >= 22)
        {
            y -= 22;
        }
        else if (x >= 1 && y >= 12)
        {
            x -= 1;
            y -= 12;
        }
        else if (x >= 2 && y >= 2)
        {
            x -= 2;
            y -= 2;
        }
        else
        {
            cout << "Ciel" << endl;
            break;
        }
    }

    return 0;
}
