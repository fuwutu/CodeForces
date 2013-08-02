//4215774   Aug 2, 2013 10:26:21 AM	fuwutu	 316A1 - Special Task (30 points)	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <iostream>
#include <string>
#include <numeric>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int letter[128] = {0}, zero = 0;
    for (size_t i = 0; i < s.length(); ++i)
    {
        if (s[i] >= 'A' && s[i] < 'K')
        {
            letter[s[i]] = 1;
        }
        else if (s[i] == '?')
        {
            zero += 1;
        }
    }

    int result = 1;
    int lettercount = accumulate(letter + 'A', letter + 'K', 0);
    if (lettercount > 0)
    {
        if (s[0] >= 'A' && s[0] < 'K')
        {
            result *= 9;
        }
        else
        {
            result *= 10;
        }
    }
    for (int i = 1; i < lettercount; ++i)
    {
        result *= (10 - i);
    }

    if (zero > 0 && s[0] == '?')
    {
        result *= 9;
        zero -= 1;
    }

    string padding(zero, '0');
    cout << result << padding << endl;
}
