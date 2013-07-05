//4027532   Jul 5, 2013 7:07:08 PM	fuwutu	 141A - Amusing Joke	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int dict[128] = {0};
    string s;
    cin >> s;
    for (size_t i = 0; i < s.length(); ++i)
    {
        dict[s[i]] += 1;
    }
    cin >> s;
    for (size_t i = 0; i < s.length(); ++i)
    {
        dict[s[i]] += 1;
    }
    cin >> s;
    for (size_t i = 0; i < s.length(); ++i)
    {
        dict[s[i]] -= 1;
    }

    if (count(dict, dict + sizeof(dict) / sizeof(dict[0]), 0) == sizeof(dict) / sizeof(*dict))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
