//4032976   Jul 7, 2013 6:40:04 AM	fuwutu	 276A - Lunch Rush	 GNU C++0x	Accepted	31 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, k, f, t, max_joy, joy;
    cin >> n >> k >> f >> t;
    if (t > k)
    {
        max_joy = f - (t - k);
    }
    else
    {
        max_joy = f;
    }
    while (--n)
    {
        cin >> f >> t;
        if (t > k)
        {
            joy = f - (t - k);
        }
        else
        {
            joy = f;
        }
        if (joy > max_joy)
        {
            max_joy = joy;
        }
    }
    cout << max_joy << endl;
    return 0;
}
