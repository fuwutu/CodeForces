//4032948   Jul 7, 2013 6:21:47 AM	fuwutu	 41A - Translation	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    reverse(t.begin(), t.end());
    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
