//4033946   Jul 7, 2013 12:54:50 PM	fuwutu	 146A - Lucky Ticket	 GNU C++0x	Accepted	 15 ms	 0 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    size_t n;
    string s;
    cin >> n >> s;

    bool lucky = true;
    int diff(0);
    n /= 2;
    for (size_t i = 0; i < n; ++i)
    {
        if ((s[i] != '4' && s[i] != '7') || (s[n+i] != '4' && s[n+i] !='7'))
        {
            lucky = false;
            break;
        }
        diff += (s[i] - s[n+i]);
    }
    lucky = lucky && (diff == 0);
    cout << (lucky ? "YES" : "NO") << endl;
    return 0;
}
