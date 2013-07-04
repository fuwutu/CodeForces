//4021166   Jul 4, 2013 7:14:46 PM	fuwutu	 228A - Is your horseshoe on the other hoof?	 GNU C++0x	Accepted	 15 ms	 0 KB
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> s(4);
    cin >> s[0] >> s[1] >> s[2] >> s[3];
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    cout << 4 - s.size() << endl;
    return 0;
}
