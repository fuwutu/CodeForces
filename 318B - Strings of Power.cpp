//4240656   Aug 7, 2013 7:27:25 PM	fuwutu	 318B - Strings of Power	 GNU C++0x	Accepted	156 ms	2100 KB
#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int heavy(0);
    long long amount(0);
    for (size_t i = 4; i < s.length(); ++i)
    {
        if (s[i] == 'l')
        {
            if (s[i-4] == 'm' && s[i-3] == 'e' && s[i-2] == 't' && s[i-1] == 'a')
            {
                amount += heavy;
            }
        }
        else if (s[i-4] == 'h' && s[i-3] == 'e' && s[i-2] == 'a' && s[i-1] == 'v' && s[i] == 'y')
        {
            ++heavy;
        }
    }
    cout << amount << endl;
    return 0;
}
