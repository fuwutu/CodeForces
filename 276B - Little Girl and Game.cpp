//4057570   Jul 13, 2013 7:06:56 AM	fuwutu	 276B - Little Girl and Game	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    bool odd[26] = {false};
    for (size_t i = 0; i < s.length(); ++i)
    {
        odd[s[i]-'a'] = !odd[s[i]-'a'];
    }
    int oddcount = count(odd, odd + sizeof(odd) / sizeof(odd[0]), true);
    cout << (oddcount == 0 || oddcount % 2 == 1 ? "First" : "Second") << endl;
    return 0;
}
