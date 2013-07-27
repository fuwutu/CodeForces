//4172198   Jul 27, 2013 5:09:00 AM	fuwutu	 136B - Ternary Logic	 GNU C++0x	Accepted	30 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int a, c, ad[20] = {0}, an(0), cd[20] = {0}, cn(0);
    cin >> a >> c;

    while (a != 0)
    {
        ad[an++] = a % 3;
        a /= 3;
    }

    while (c != 0)
    {
        cd[cn++] = c % 3;
        c /= 3;
    }

    int tor(0);
    for (int i = max(an, cn) - 1; i >= 0; --i)
    {
        tor = tor * 3 + (cd[i] + 3 - ad[i]) % 3;
    }
    cout << tor << endl;
    return 0;
}
