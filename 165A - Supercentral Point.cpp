//4033090   Jul 7, 2013 7:51:42 AM	fuwutu	 165A - Supercentral Point	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, x[200], y[200], supercentral(0);
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n; ++i)
    {
        int bit = 15;
        for (int j = 0; j < n && bit != 0; ++j)
        {
            if (x[j] == x[i])
            {
                if (y[j] < y[i])
                {
                    bit &= (15 - 1);
                }
                if (y[j] > y[i])
                {
                    bit &= (15 - 2);
                }
            }
            if (y[j] == y[i])
            {
                if (x[j] < x[i])
                {
                    bit &= (15 - 4);
                }
                if (x[j] > x[i])
                {
                    bit &= (15 - 8);
                }
            }
        }
        if (bit == 0)
        {
            supercentral += 1;
        }
    }
    cout << supercentral << endl;
    return 0;
}
