//4035355   Jul 7, 2013 7:39:20 PM	fuwutu	 244A - Dividing Orange	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, k, a[30];
    bool b[901] = {false};
    cin >> n >> k;
    for (int i = 0; i < k; ++i)
    {
        cin >> a[i];
        b[a[i]] = true;
    }
    int d = 0;
    for (int i = 0; i < k; ++i)
    {
        cout << a[i];
        for (int j = 1; j < n; ++j)
        {
            ++d;
            while (b[d])
            {
                ++d;
            }
            cout << " " << d;
        }
        cout << endl;
    }
    return 0;
}
