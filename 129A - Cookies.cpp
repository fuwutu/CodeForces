//4033714   Jul 7, 2013 12:04:07 PM	fuwutu	 129A - Cookies	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, a, odd(0), even(0);
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
    }

    cout << (odd % 2 == 1 ? odd : even) << endl;
    return 0;
}
