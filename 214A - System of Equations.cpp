//4032999   Jul 7, 2013 7:05:20 AM	fuwutu	 214A - System of Equations	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, m, answer(0);
    cin >> n >> m;

    for (int a = 0; a * a <= n && a <= m; ++a)
    {
        int b = n - a * a;
        if (a + b * b == m)
        {
            answer += 1;
        }
    }

    cout << answer << endl;
    return 0;
}
