//4057689   Jul 13, 2013 7:39:37 AM	fuwutu	 218B - Airport	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, a[1000];
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> a[i];
    }

    sort(a, a + m);
    int minimum(0), num(a[0]), k(0);
    for (int i = 0; i < n; ++i)
    {
        minimum += num;
        num -= 1;
        if (num == 0)
        {
            num = a[++k];
        }
    }

    sort(a, a + m, greater<int>());
    int maximum(0);
    while (n--)
    {
        maximum += a[0];
        a[0] -= 1;
        for (int i = 1; i < m; ++i)
        {
            if (a[i] <= a[i-1])
            {
                break;
            }
            swap(a[i], a[i-1]);
        }
    }

    cout << maximum << " " << minimum << endl;
    return 0;
}
