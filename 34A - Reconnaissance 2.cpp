//4172496   Jul 27, 2013 6:04:28 AM	fuwutu	 34A - Reconnaissance 2	 GNU C++0x	Accepted	30 ms	0 KB
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, a1;
    cin >> n >> a1;

    int prev(a1), cur, reconnaissance(1000), index1, index2;
    for (int i = 2; i <= n; ++i)
    {
        cin >> cur;
        int diff = abs(cur - prev);
        if (diff < reconnaissance)
        {
            reconnaissance = diff;
            index1 = i - 1;
            index2 = i;
        }
        prev = cur;
    }
    int diff = abs(a1 - prev);
    if (diff < reconnaissance)
    {
        index1 = n;
        index2 = 1;
    }
    cout << index1 << " " << index2 << endl;
    return 0;
}
