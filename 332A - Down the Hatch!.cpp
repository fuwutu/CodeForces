//4236727   Aug 6, 2013 3:44:49 PM	fuwutu	 332A - Down the Hatch!	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, glasses(0);
    string s;
    cin >> n >> s;
    for (int i = n; i < s.length(); i += n)
    {
        if (s[i-1] == s[i-2] && s[i-2] == s[i-3])
        {
            ++glasses;
        }
    }
    cout << glasses << endl;
    return 0;
}
