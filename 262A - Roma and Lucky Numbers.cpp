//4033968   Jul 7, 2013 12:59:41 PM	fuwutu	 262A - Roma and Lucky Numbers	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, k, count(0);
    cin >> n >> k;

    string s;
    while (n--)
    {
        int lucky(0);
        cin >> s;
        for (size_t i = 0; i < s.length(); ++i)
        {
            if (s[i] == '4' || s[i] == '7')
            {
                lucky += 1;
            }
        }
        if (lucky <= k)
        {
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}
