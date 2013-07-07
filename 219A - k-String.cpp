//4033694   Jul 7, 2013 11:59:29 AM	fuwutu	 219A - k-String	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int k;
    string s;
    cin >> k >> s;

    int count[26] = {0};
    for (size_t i = 0; i < s.length(); ++i)
    {
        count[s[i]-'a'] += 1;
    }

    string s1;
    size_t c = 0;
    for (; c < 26; ++c)
    {
        if (count[c] % k != 0)
        {
            break;
        }
        else
        {
            s1.append(count[c] / k, 'a' + c);
        }
    }
    if (c == 26)
    {
        while (k--)
        {
            cout << s1;
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
