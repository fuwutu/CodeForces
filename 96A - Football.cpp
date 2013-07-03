//4007191   Jul 3, 2013 7:32:32 PM	fuwutu	 96A - Football	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int contiguous = 1;
    for (size_t i = 1; i < s.length(); ++i)
    {
        if (s[i] == s[i - 1])
        {
            contiguous += 1;
            if (contiguous == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            contiguous = 1;
        }
    }

    cout << "NO" << endl;
    return 0;
}
