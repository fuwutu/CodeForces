//4034927   Jul 7, 2013 5:30:43 PM	fuwutu	 259A - Little Elephant and Chess	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool fail(false);
    string s;
    for (int i = 0; i < 8; ++i)
    {
        cin >> s;
        for (size_t j = 1; j < s.length(); ++j)
        {
            if (s[j] == s[j-1])
            {
                fail = true;
            }
        }
    }
    cout << (fail ? "NO" : "YES") << endl;
    return 0;
}
