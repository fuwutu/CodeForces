//4006999   Jul 3, 2013 6:34:23 PM	fuwutu	 112A - Petya and Strings	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    cout << strcmp(s1.c_str(), s2.c_str()) << endl;
    return 0;
}
