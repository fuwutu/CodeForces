//4033438   Jul 7, 2013 10:40:48 AM	fuwutu	 246A - Buggy Sorting	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 2)
    {
        for (int i = 2; i <= n; ++i)
        {
            cout << i << " ";
        }
        cout << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
