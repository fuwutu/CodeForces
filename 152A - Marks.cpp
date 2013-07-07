//4034103   Jul 7, 2013 1:39:50 PM	fuwutu	 152A - Marks	 GNU C++0x	Accepted	15 ms	100 KB
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    size_t n, m;
    cin >> n >> m;
    vector<string> marks(n);
    for (size_t i = 0; i < n; ++i)
    {
        cin >> marks[i];
    }
    vector<bool> successful(n, false);
    for (size_t subject = 0; subject < m; ++subject)
    {
        char best = '0';
        for (size_t i = 0; i < n; ++i)
        {
            if (marks[i][subject] > best)
            {
                best = marks[i][subject];
            }
        }
        for (size_t i = 0; i < n; ++i)
        {
            if (marks[i][subject] == best)
            {
                successful[i] = true;
            }
        }
    }
    cout << count(successful.begin(), successful.end(), true);
    return 0;
}
