//4003927     Jul 2, 2013 8:12:30 PM	fuwutu	 1A - Theater Square	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    long long n, m, a, number;
    cin >> n >> m >> a;
    number = ((n + a - 1)) / a * ((m + a - 1) / a);
    cout << number << endl;
    return 0;
}
