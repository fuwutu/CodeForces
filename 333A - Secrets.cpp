//4188836   Jul 27, 2013 4:31:25 PM	fuwutu	 333A - Secrets	 GNU C++0x	Accepted	30 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    while (n % 3 == 0)
    {
        n /= 3;
    }

    cout << n / 3 + 1 << endl;
    return 0;
}
