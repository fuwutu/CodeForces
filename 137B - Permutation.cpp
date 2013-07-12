//4055758   Jul 12, 2013 8:25:21 PM	fuwutu	 137B - Permutation	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, a, appear[5001] = {0};
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        if (a <= n)
        {
            appear[a] = 1;
        }
    }
    cout << count(appear + 1, appear + n + 1, 0) << endl;
    return 0;
}
