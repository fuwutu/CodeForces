//4059137   Jul 13, 2013 2:18:42 PM 	fuwutu 	75A - Life Without Zeros 	GNU C++0x 	Accepted 	15 ms 	0 KB
#include <iostream>

using namespace std;

int remove0(int n)
{
    int m(0), pow(1);
    while (n != 0)
    {
        int d = n % 10;
        n /= 10;
        if (d != 0)
        {
            m += d * pow;
            pow *= 10;
        }
    }
    return m;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int c = a + b;
    int A = remove0(a);
    int B = remove0(b);
    int C = remove0(c);
    cout << (A + B == C ? "YES" : "NO") << endl;
    return 0;
}
