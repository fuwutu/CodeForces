//4124738   Jul 21, 2013 4:00:21 AM	fuwutu	 3A - Shortest path of the king	 GNU C++0x	Accepted	 15 ms	 0 KB
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    cout << max(abs(s[0] - t[0]), abs(s[1] - t[1])) << endl;
    while (s != t)
    {
        if (s[0] < t[0])
        {
            cout << "R";
            s[0] += 1;
        }
        else if (s[0] > t[0])
        {
            cout << "L";
            s[0] -= 1;
        }

        if (s[1] < t[1])
        {
            cout << "U";
            s[1] += 1;
        }
        else if (s[1] > t[1])
        {
            cout << "D";
            s[1] -= 1;
        }

        cout << endl;
    }
    return 0;
}
