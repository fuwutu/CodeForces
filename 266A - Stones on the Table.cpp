//4007012   Jul 3, 2013 6:39:25 PM	fuwutu	 266A - Stones on the Table	 GNU C++0x	Accepted	 15 ms	 0 KB
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    size_t n;
    cin >> n;
    string s;
    cin >> s;
    s.erase(unique(s.begin(), s.end()), s.end());
    cout << n - s.length() << endl;
    return 0;
}
