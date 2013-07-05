//4027348   Jul 5, 2013 6:26:08 PM	fuwutu	 263A - Beautiful Matrix	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 0;
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= 5; ++j)
        {
            cin >> x;
            if (x == 1)
            {
                cout << abs(i - 3) + abs(j - 3) << endl;
            }
        }
    }
    return 0;
}
