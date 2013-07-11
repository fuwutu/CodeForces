//4052601   Jul 12, 2013 3:50:47 AM	fuwutu	 296A - Yaroslav and Permutations	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int continuous(1), max_continuous(1);
    for (int i = 1; i < n; ++i)
    {
        if (a[i] == a[i-1])
        {
            continuous += 1;
            if (continuous > max_continuous)
            {
                max_continuous = continuous;
            }
        }
        else
        {
            continuous = 1;
        }
    }
    cout << (max_continuous <= (n + 1) / 2 ? "YES" : "NO") << endl;
    return 0;
}
