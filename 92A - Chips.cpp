//4033461   Jul 7, 2013 10:48:16 AM	fuwutu	 92A - Chips	 GNU C++0x	Accepted	 15 ms	 0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    m %= (n * (n + 1) / 2);
    for (int i = 1; i <= n; ++i)
    {
        if (m < i)
        {
            break;
        }
        m -= i;
    }
    cout << m << endl;
    return 0;
}
