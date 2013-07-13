//4057739   Jul 13, 2013 7:54:54 AM	fuwutu	 327A - Flipping Game	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, a, count1(0), extra0(0), extra0max(-1);
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a == 1)
        {
            count1 += 1;
            if (extra0 > 0)
            {
                extra0 -= 1;
            }
        }
        else
        {
            extra0 += 1;
            if (extra0 > extra0max)
            {
                extra0max = extra0;
            }
        }
    }
    cout << count1 + extra0max << endl;
    return 0;
}
