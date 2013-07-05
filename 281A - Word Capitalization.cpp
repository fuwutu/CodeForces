//4027326   Jul 5, 2013 6:20:12 PM	fuwutu	 281A - Word Capitalization	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    s[0] = towupper(s[0]);
    cout << s << endl;
    return 0;
}
