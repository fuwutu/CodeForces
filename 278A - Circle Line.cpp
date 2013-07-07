//4032921   Jul 7, 2013 5:54:54 AM	fuwutu	 278A - Circle Line	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, d, f[100+2] = {0}, s, t;
    cin >> n;
    for (int i = 2; i < n + 2; ++i)
    {
        cin >> d;
        f[i] = f[i-1] + d;
    }
    cin >> s >> t;
    if (s > t)
    {
        swap(s, t);
    }
    int distance = f[t] - f[s];
    cout << min(distance, (f[n+1] - distance)) << endl;
    return 0;
}
