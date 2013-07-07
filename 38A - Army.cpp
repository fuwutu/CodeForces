//4035016   Jul 7, 2013 5:54:29 PM	fuwutu	 38A - Army	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, d[100] = {0}, a, b;
    cin >> n;
    for (int i = 1; i < n; ++i)
    {
        cin >> d[i];
    }
    cin >> a >> b;
    cout << accumulate(d + a, d + b, 0) << endl;
    return 0;
}
