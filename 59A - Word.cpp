//4033867   Jul 7, 2013 12:41:33 PM	fuwutu	 59A - Word	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int upper(0), lower(0);
    for (size_t i = 0; i < s.length(); ++i)
    {
        if (isupper(s[i]))
        {
            upper += 1;
        }
        else
        {
            lower += 1;
        }
    }
    if (upper > lower)
    {
        for (size_t i = 0; i < s.length(); ++i)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (size_t i = 0; i < s.length(); ++i)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}
