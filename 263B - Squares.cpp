//4033603   Jul 7, 2013 11:36:30 AM	fuwutu	 263B - Squares	 GNU C++0x	Accepted	 15 ms	 0 KB
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, k, a[50+1];
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a + n, greater<int>());
    a[n] = 0;
    if (k > n)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << a[k-1] << " " << 0 << endl;
    }
    return 0;
}
