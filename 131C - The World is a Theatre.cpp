//4212008	 Aug 1, 2013 9:09:20 AM	fuwutu	 131C - The World is a Theatre	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <iostream>

using namespace std;

long long C(int n, int m)
{
    long long result(1);
    for (int i = 0; i < m; ++i)
    {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main()
{
    int n, m, t;
    cin >> n >> m >> t;

    long long ways(0);
    for (int i = 4; i <= t - 1; ++i)
    {
        ways += C(n, i) * C(m, t - i);
    }
    cout << ways << endl;
}
