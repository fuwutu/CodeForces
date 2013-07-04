//4022081   Jul 4, 2013 8:27:39 PM	fuwutu	 236A - Boy or Girl	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    if (s.length() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
