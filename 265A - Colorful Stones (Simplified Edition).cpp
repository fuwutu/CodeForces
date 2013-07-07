//4033637   Jul 7, 2013 11:44:53 AM	fuwutu	 265A - Colorful Stones (Simplified Edition)	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    size_t pos = 0;
    for (size_t i = 0; i < t.length(); ++i)
    {
        if (t[i] == s[pos])
        {
            pos += 1;
        }
    }
    cout << pos + 1 << endl;
    return 0;
}
