//4007272   Jul 3, 2013 7:54:19 PM	fuwutu	 160A - Twins	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int value = accumulate(a.begin(), a.end(), 0) / 2;

    sort(a.begin(), a.end(), greater<int>());
    int mine = 0;
    size_t i = 0;
    while (mine <= value)
    {
        mine += a[i++];
    }

    cout << i << endl;
    return 0;
}
