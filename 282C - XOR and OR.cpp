//4237725   Aug 6, 2013 9:18:15 PM 	fuwutu 	282C - XOR and OR 	GNU C++0x 	Accepted 	280 ms 	3100 KB
#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    bool can(false);
    if (a.length() == b.length())
    {
        size_t ia(0), ib(0);
        while (ia < a.length() && a[ia] == '0')
            ++ia;
        while (ib < b.length() && b[ib] == '0')
            ++ib;
        if ((ia < a.length() && ib < b.length())
            || (ia == a.length() && ib == b.length()))
            can = true;
    }
    cout << (can ? "YES" : "NO") << endl;
    return 0;
}
