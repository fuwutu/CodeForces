//4005085     Jul 3, 2013 3:50:19 AM	fuwutu	 118A - String Task	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, r;
    cin >> s;
    for (char c : s)
    {
        if (c >= 'A' && c <= 'Z')
        {
            c += 'a' - 'A';
        }
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
        {
            r.append(1, '.');
            r.append(1, c);
        }
    }
    cout << r << endl;
    return 0;
}
