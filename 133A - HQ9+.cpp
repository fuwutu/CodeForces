//4007157   Jul 3, 2013 7:19:37 PM	fuwutu	 133A - HQ9+	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.find_first_of("HQ9") != string::npos)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
