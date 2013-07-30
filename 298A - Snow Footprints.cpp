//4205157   Jul 30, 2013 8:24:41 PM	fuwutu	 298A - Snow Footprints	 GNU C++0x	Accepted	30 ms	0 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    size_t n;
    string s;
    cin >> n >> s;

    for (size_t i = 0; i < n; ++i)
    {
        if (s[i] != '.')
        {
            if (s[i] == 'R')
            {
                while (s[i] == 'R')
                {
                    ++i;
                }
                cout << i << " " << i + 1 << endl;
            }
            else
            {
                cout << i + 1 << " " << i << endl;
            }
            break;
        }
    }

    return 0;
}
