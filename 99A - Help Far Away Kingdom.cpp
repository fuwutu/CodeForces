//4259472   Aug 10, 2013 7:43:30 AM	fuwutu	 99A - Help Far Away Kingdom	 GNU C++0x	Accepted	62 ms	0 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    size_t n = s.find('.');
    if (s[n-1] == '9')
    {
        cout << "GOTO Vasilisa." << endl;
    }
    else
    {
        if (s[n+1] >= '5')
        {
            s[n-1] += 1;
        }
        s.erase(s.begin() + n, s.end());
        cout << s << endl;
    }

    return 0;
}
